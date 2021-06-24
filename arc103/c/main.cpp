#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;

int main(){
    int n,a,b,c,d,ans,i,ouo;
    vector<int> x(10),y(10);
	cin>>n;
	a=b=c=d=0;
	for(i=0;i<n;i++)
	{
		cin>>ouo;
		if(i&1)
		{
			y[ouo]++;
		}
		else
		{
			x[ouo]++;
		}
	}
	for(i=1;i<=100000;i++)
	{
		if(y[i]>y[d])
		{
			d=i;
		}
		if(y[d]>y[c])
		{
			swap(c,d);
		}
		if(x[i]>x[b])
		{
			b=i;
		}
		if(x[b]>x[a])
		{
			swap(a,b);
		}
	}
	if(a!=c)
	{
		ans=n-x[a]-y[c];
	}
	else
	{
		ans=min(n-x[a]-y[d], n-x[b]-y[c]);
	}
	cout<<ans<<'\n';
    return 0;
}
