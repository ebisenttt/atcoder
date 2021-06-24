#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;
typedef long double ld;
int main(){
    ll n;cin>>n;
    vector<ll> coins(n);
    REP(i,n)cin>>coins[i];
    sort(ALL(coins));
    vector<ll> d(n);
    REP(i,n){
        ll cnt=0, r=coins[i];
        REP(j,n){
            if(i==j)continue;
            ll l=coins[j];
            if(r%l==0)cnt++;
        }
        d[i]=cnt;
    }
    ld prb=0.0;
    REP(i,n){
        if(d[i]%2==1){
            prb+=1.0/2.0;
        }else{
            ld s=d[i];
            prb+=(s+2.0)/(2*s+2.0);
        }
    }
    cout<<fixed<<setprecision(6)<<prb<<endl;
    return 0;
}
