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
  string n; 
  cin >> n;
  while(n.back() == '0')n.pop_back();
  bool is = true;
  REP(i, n.size()){
    if(n[i] == n[n.size() - i - 1])continue;
    else{
      is = false;
      break;
    }
  }
  string ans = is ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
