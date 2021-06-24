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
  int a, b;
  cin >> a >> b;
  int ans;
  if(a + b >= 15 && b >= 8)ans = 1;
  else if(a + b >= 10 && b >= 3)ans = 2;
  else if(a + b >= 3)ans = 3;
  else ans = 4;
  cout << ans << endl;
  return 0;
}
