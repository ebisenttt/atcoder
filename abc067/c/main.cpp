#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
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
    vector<ll> v(n);
    ll sum=0;
    REP(i,n){
        ll a; cin>>a;
        sum+=a;
        v[i]=sum;
    }
    ll m=1e15;
    REP(i,n-1){
        m=min(m, abs(v[i]*2-sum));
    }
    cout<<m<<endl;
    return 0;
}
