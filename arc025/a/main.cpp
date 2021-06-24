#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size()
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1e9 
typedef long long ll;
typedef long double ld;
int main(){
  vector<ll> v(7),w(7);
  REP(i,7)cin>>v[i];
  REP(i,7)cin>>w[i];
  ll ans=0;
  REP(i,7)ans+=max(v[i],w[i]);
  cout<<ans<<endl;
  return 0;
}
