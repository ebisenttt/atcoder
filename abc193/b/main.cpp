#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1e10
typedef long long ll;
typedef long double ld;

int main(){
  ll n;
  cin >> n;
  vector<vector<ll>> v(n, vector<ll> (3));
  REP(i,n){
    REP(j,3){
      cin >> v[i][j];
    }
  }
  sort(ALL(v));
  ll price = INF;
  REP(i,n){
    if(v[i][2] - v[i][0] > 0 && price > v[i][1])price = v[i][1];
  }
  if(price == 1e10)price = -1;
  cout << price << endl;
  return 0;
}
