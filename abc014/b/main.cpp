#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <bitset>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;
typedef long double ld;

string binary(ll &n, ll d){
    ll k=1, cnt=0;
    while(n>k){
        k*=2;
        if(n>=k)cnt++;
    }
    string bi;
    for(int j=cnt; j>=0; j--){
        int num=n/pow(2,j);
        bi+=to_string(num);
        n-=pow(2,j)*num;
    }
    ll s=bi.size();
    ll m=d-s;
    REP(i,m)bi="0"+bi;
    return bi;
}

int main(){
    ll n,x; cin>>n>>x;
    //ll n=2,x=2;
    vector<ll> v(n);
    REP(i,n)cin>>v[n-i-1];
    //REP(i,n)v[20-i-1]=i;
    string bi=binary(x,n);
    ll sum=0;
    REP(i,n)if(bi[i]=='1')sum+=v[i];
    cout<<sum<<endl;
    return 0;
}