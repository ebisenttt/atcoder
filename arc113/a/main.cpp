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
  ll k;
  cin >> k;
  ll cnt = 0;
  FOR(a,1,k+1){
    FOR(b,a,k+1){
      int c = k / a / b;
      cnt += c;
    }
  }
  cout << cnt << endl;
  return 0;
}
