#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <map>
#include <fstream>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
#define INF 1e9 
typedef long long ll;
typedef long double ld;
int main(){
    ll a,b,c,k;
    cin>>a>>b>>c>>k;
    ll x,y,z,num;
    num=k*(a+b+c);
    if(k%2==0){
        x=num+a;
        y=num+b;
        z=num+c;
    }else{
        x=num-a;
        y=num-b;
        z=num-c;
    }
    if(x-y>1e18)cout<<"Unfair"<<endl;
    else cout<<x-y<<endl;
    return 0;
}
