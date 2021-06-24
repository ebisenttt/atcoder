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
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    REP(i,n)cin>>v[i];
    sort(ALL(v),greater());
    vector<ll> w(k);
    REP(i,k)w[i]=v[i];
    sort(ALL(w));
    ld rate=0.0;
    REP(i,k){
        rate=(rate+w[i])/2.0;
    }
    cout<<fixed<<setprecision(6)<<rate<<endl;
    return 0;
}
