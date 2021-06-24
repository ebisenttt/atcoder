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

struct UnionFind{
  vector<ll> r;
  UnionFind(ll n){
    r=vector<ll>(n,-1);
  }
  ll root(ll x){
    if(r[x]<0) return x;
    return r[x]=root(r[x]);
  }
  bool unite(ll x,ll y){
    x=root(x);
    y=root(y);
    if(x==y)return false;
    if(r[x]<r[y])swap(x,y);
    r[x]+=r[y];
    r[y]=x;
    return true;
  }
  ll size(ll x){
    return -r[root(x)];
  }
};

int main(){
  ll n,m;
  cin>>n>>m;
  UnionFind uf(n);
  REP(i,m){
    ll a,b;
    cin>>a>>b;
    a--,b--;
    uf.unite(a,b);
  }
  ll ans=0;
  REP(i,n)ans=max(ans,uf.size(i));
  cout<< ans <<endl;
  return 0;
}
