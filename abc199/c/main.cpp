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
  ll n, q;
  string s;
  cin >> n >> s >> q;
  bool flag = false;
  REP(i,q){
    ll t, a, b;
    cin >> t >> a >> b;
    t--;
    a--;
    b--;
    if(t)flag = !flag;
    else {
      if(flag){
        if(a >= n)a = a - n;
        else a = a + n;
        if(b >= n)b = b - n;
        else b = b + n;
      }
      swap(s[a], s[b]);
    }
  }
  if(flag){
    string l = s.substr(0, n);
    string r = s.substr(n);
    s = r + l;
  }
  cout << s << endl;
  return 0;
}
