#include <bits/stdc++.h>
#include <atcoder/all>
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

using namespace atcoder;

int main() {
  ll n, m;
  cin >> n >> m;
  dsu graph(n);

  REP(i,m){
    ll a,b;
    cin >> a >> b;
    a--;
    b--;
    graph.merge(a,b);
  }

  cout << graph.groups().size() - 1 << endl;
  return 0;
}