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
  ll r, x, y;
  cin >> r >> x >> y;
  ld d = sqrt(x * x + y * y);
  if(r == d)cout << 1 << endl;
  else if(d <= 2 * r)cout << 2 << endl;
  else{
    ll q = ceil(d / r);
    cout << q << endl;
  }
  return 0;
}
