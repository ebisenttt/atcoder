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
  cin >> n;
  vector<ll> a(n), b(n);
  REP(i,n)cin>>a[i];
  REP(i,n)cin>>b[i];
  ll ans = MIN(b) - MAX(a) + 1;
  ans = ans > 0 ? ans : 0;
  cout << ans << endl;
  return 0;
}
