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
  ll p;
  cin >> p;
  vector<ll> coins(10);
  ll coin = 1;
  FOR(i,1,11){
    coin *= i;
    coins[i - 1] = coin;
  }
  ll count = 0;
  for(int i = 9; i >= 0; i--){
    ll q = p / coins[i];
    ll r = p % coins[i];
    count += q;
    p = r;
  }
  cout << count << endl;
  return 0;
}
