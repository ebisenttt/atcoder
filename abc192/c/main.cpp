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
  ll k;
  cin >> n >> k;
  while(k > 0){
    sort(ALL(n), greater());
    string g1 = n;
    sort(ALL(n));
    while(n[0] == '0')n = n.substr(1);
    string g2 = n;
    
  }
  return 0;
}
