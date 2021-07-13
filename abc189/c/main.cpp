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
  cin >> n;
  vector<ll> v(n);
  REP(i,n)cin>>v[i];
  ll M = 0;
  REP(i,n){
    ll m = v[i];
    FOR(j,i,n){
      m = min(m, v[j]);
      ll sum = m * (j - i + 1);
      M = max(M, sum);
    }
  }
  cout << M << endl;
  return 0;
}
