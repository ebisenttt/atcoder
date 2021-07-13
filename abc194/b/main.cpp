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
  int n;
  cin >> n;
  vector<pair<ll,ll>> a(n), b(n);
  REP(i,n){
    cin >> a[i].first;
    a[i].second = i;
    cin >> b[i].first;
    b[i].second = i;
  }
  sort(ALL(a));
  sort(ALL(b));
  ll ans;
  if(a[0].second == b[0].second){
    vector<ll> v = {a[0].first + b[0].first, max(a[0].first, b[1].first), max(a[1].first, b[0].first)};
    ans = MIN(v);
  }else{
    ans = max(a[0].first, b[0].first);
  }
  cout << ans << endl;
  return 0;
}
