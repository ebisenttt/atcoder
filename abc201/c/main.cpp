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
  string s;
  cin >> s;
  ll ans = 0;
  REP(i,10000){
    vector<bool> flag1(10);
    ll x = i;
    REP(i,4){
      flag1[x%10] = true;
      x /= 10;
    }
    bool flag2 = true;
    REP(i,10){
      if(!flag1[i] && s[i] == 'o')flag2 = false;
      if(flag1[i] && s[i] == 'x')flag2 = false;
    }
    ans += flag2;
  }
  cout << ans << endl;
  return 0;
}
