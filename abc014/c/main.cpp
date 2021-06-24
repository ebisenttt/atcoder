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
    ll n; cin>>n;
    vector<ll> v(1e6+1);
    REP(i,n){
        ll a,b; cin>>a>>b;
        v[a]++, v[b+1]--;
    }
    ll sum=0;
    FOR(i,1,1e6+1)v[i]+=v[i-1];
    cout<<MAX(v)<<endl;
    return 0;
}
