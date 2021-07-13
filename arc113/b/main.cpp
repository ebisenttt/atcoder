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
  ll a,b,c;
  cin >> a >> b >> c;
  a %= 10;
  b %= 4;
  if(b == 0)b = 4;
  ll bc = b;
  if(b == 2){
    if(c == 1)bc = 2;
    else bc = 4;
  }else if(b == 3){
    if(c % 2 == 0)bc = 1;
    else bc = 3;
  }
  cout << (ll)pow(a,bc) % 10 << endl;
  return 0;
}
