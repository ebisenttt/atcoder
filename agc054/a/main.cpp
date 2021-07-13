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
  string s;
  cin >> n >> s;
  ll cnt = 0;
  while(s.size() != 0){
    string tmp = s;
    char c = s[0];
    for(int i = s.size() - 1; i >= 0; i--){
      if(c != s[i]){
        cnt++;
        if(i == 1) s = "";
        else s = s.substr(i + 1);
        break;
      }
    }
    if(s == tmp)break;
  }
  if(s.size() == 0)cout << cnt << endl;
  else cout << -1 << endl;
  return 0;
}
