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
  while(m > 0){
    m /= 10;
    digit++;
  }
  ll ans = 0;
  if(digit % 2){
    digit /= 2;
    ans = pow(10, digit) - 1;
  }else{
    digit /= 2;
    ll q = n / pow(10, digit);
    ll r = n % (ll)pow(10, digit);
    ans = q > r ? q - 1 : q;
  }
  cout << ans << endl;
  return 0;
}
