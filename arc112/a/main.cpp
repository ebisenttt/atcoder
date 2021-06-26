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
    ll cnt = 0;
    ll dif = r - l;
    while(dif > 0){
      cnt += (r - l) - dif + 1;
      dif--;
    }
    cout << cnt << endl;
  }
  return 0;
}
