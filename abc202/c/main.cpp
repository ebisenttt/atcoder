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

map<ll, ll> makeMap(vector<ll> v);

int main(){
  ll n;
  cin>>n;
  vector<ll> a(n), b(n), c(n);
  REP(i,n)cin>>a[i];
  REP(i,n)cin>>b[i];
  REP(i,n)cin>>c[i];
  map<ll, ll> A, C;
  A = makeMap(a);
  C = makeMap(c);
  map<ll, set<ll>> B;
  REP(i,n){
    if(B.count(b[i]) > 0)B.at(b[i]).insert(i);
    else B.insert({b[i], {i}});
  }
  ll ans = 0;
  for(auto ap: A){
    ll anum = ap.first;
    if(B.count(anum) > 0){
      set<ll> s = B.at(anum);
      for(auto itr: s){
        if(C.count(itr + 1) > 0)ans += ap.second * C.at(itr + 1);
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}

map<ll,ll> makeMap(vector<ll> v){
  ll n = v.size();
  map<ll, ll> mp;
  REP(i,n){ 
    if(mp.count(v[i]) > 0)mp.at(v[i])++;
    else mp.insert(make_pair(v[i], 1));
  }
  return mp;
}