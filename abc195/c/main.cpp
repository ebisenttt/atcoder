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
  ll n, m;
  cin >> n;
  m = n;
  ll digit = 0;
  while (m > 0){
    digit++;
    m /= 10;
  }
  ll ans = ((digit-1) / 3) * (n - pow(10, digit - 1) + 1);
  digit--;
  while(digit > 3){
    ans += ((digit-1) / 3) * pow(10, digit - 1) * 9;
    digit--;
  }
  cout << ans << endl;
  return 0;
}
