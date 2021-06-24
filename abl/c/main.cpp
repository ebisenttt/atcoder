#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size()
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1e9 
typedef long long ll;
typedef long double ld;

struct UnionFind{
  vector<ll> par;

  UnionFind(ll n): par(n){
    REP(i,n)par[i]=i;
  }

  ll root(ll x){
    if(x==par[x])return x;
    return par[x]=root(par[x]);
  }

  ll unite(ll x,ll y){
    ll rx=root(x);
    ll ry=root(y);
    if(rx==ry)return;
    par[rx]=ry;
  }
};

int main(){
  ll n,m;
  cin>>n>>m;
  REP(i,m){
    
  }
  return 0;
}
