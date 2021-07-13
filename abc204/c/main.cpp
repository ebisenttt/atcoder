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

vector<vector<ll>> graph;

void dfs(vector<ll> &done, ll v){
  if(done[v])return;
  done[v] = true;
  for(auto next_v: graph[v]){
    dfs(done, next_v);
  }
}

int main(){
  ll n,m;
  cin >> n >> m;
  graph.resize(n);
  REP(i,n)graph[i].push_back(i);
  
  REP(i,m){
    ll a,b;
    cin >> a >> b;
    a--;
    b--;
    graph[a].push_back(b);
  }
  
  ll cnt = 0;
  REP(i,n){
    vector<ll> done(n);
    dfs(done, i);
    REP(j,n)if(done[j])cnt++;
  }

  cout << cnt << endl;

}
