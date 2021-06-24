#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1e9
typedef long long ll;
typedef long double ld;

int main(){
  ll n;
  cin>>n;
  vector<ll> v(n), max(n), sum(n);
  REP(i,n)cin>>v[i];
  ll M = 0;
  REP(i,n){
    M = M > v[i] ? M : v[i];
    max[i] = M;
    sum[i] = v[i];
  }
  FOR(i,1,n)sum[i] += sum[i - 1];
  FOR(i,1,n)sum[i] += sum[i - 1];
  REP(i,n){
    ll ans = max[i] * (i + 1) + sum[i];
    cout<<ans<<endl;
  }
  return 0;
}
