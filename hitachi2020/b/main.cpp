#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size()
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1e9 
typedef long long ll;
typedef long double ld;
using namespace std;

int main(){
  ll a,b,m;
  cin>>a>>b>>m;
  vector<ll> v(a), w(b);
  REP(i,a)cin>>v[i];
  REP(i,b)cin>>w[i];
  ll min=MIN(v)+MIN(w);
  REP(i,m){
    ll x,y,c;
    cin>>x>>y>>c;
    x--;
    y--;
    if(min>v[x]+w[y]-c){
      min=v[x]+w[y]-c;
    }
  }
  cout<<min<<endl;
  return 0;
}
