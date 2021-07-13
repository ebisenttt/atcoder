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
  cin>>n;
  ll num = 1e9 + 7;
  vector<ll> v(n);
  REP(i,n)cin>>v[i];
  sort(ALL(v));
  ll sum = 1;
  REP(i,n-1){
    ll def = v[i+1] - v[i] + 1;
    sum *= def;
    sum %= num;
  }
  sum *= v[0] + 1;
  sum %= num;
  cout << sum << endl;
  return 0;
}
