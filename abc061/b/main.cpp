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
int main(){
  ll n,m;
  cin>>n>>m;
  vector<ll> v(n);
  REP(i,m){
    ll a,b;
    cin>>a>>b;
    a--;
    b--;
    v[a]++;
    v[b]++;
  }
  REP(i,n){
    cout<<v[i]<<endl;
  }
  return 0;
}
