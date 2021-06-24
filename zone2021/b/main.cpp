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
  ll N, D, H;
  cin >> N >> D >> H;
  vector<ld> dist(N), height(N);
  REP(i,N){
    cin >> dist[i] >> height[i];
  }
  ld ans = 0;
  REP(i,N){
    ld h = height[i] - dist[i] * (H - height[i]) / (D - dist[i]);
    if(ans < h) ans = h;
  }
  cout << fixed << setprecision(4) << ans << endl;
  return 0;
}
