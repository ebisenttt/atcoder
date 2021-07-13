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
  ll n, k;
  cin >> n >> k;
  vector<vector<ll>> v(n, vector<ll> (3));
  REP(i,n){
    ll num;
    cin>>num;
    v[i][0] = num;
    v[i][1] = i;
    v[i][2] = k / n;
  }
  k %= n;
  sort(ALL(v));
  REP(i,k){
    v[i][2]++;
  }
  REP(i,n){
    ll num = v[i][0];
    ll itr = v[i][1];
    v[i] = {itr, num, v[i][2]};
  }
  sort(ALL(v));
  REP(i,n){
    cout << v[i][2] << endl;
  }
  return 0;
}
