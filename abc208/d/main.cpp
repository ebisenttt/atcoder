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
  ll n,m;
  cin >>n >>m;
  vector<vector<ll>> dist(n,vector<ll> (n, INF));
  REP(i,n)dist[i][i]=0;
  REP(i,m){
    ll a, b, c;
    cin >> a >> b >> c;
    a--;
    b--;
    dist[a][b] = c;
  }
  REP(k,n){
    
  }
  return 0;
}
