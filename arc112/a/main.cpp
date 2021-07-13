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
  ll t;
  cin >> t;
  REP(i,t){
    ll l, r;
    cin >> l >> r;
    ll dif = r - l;
    ll cnt;
    if(l > dif)cnt = 0;
    else {
      cnt = (dif + 1) * (dif + 1) - dif * (dif + 1) / 2;
      if(l > 0)cnt -= (dif + 1) * l - (l - 1) * l / 2;
    }
    cout << cnt << endl;
  }
  return 0;
}
