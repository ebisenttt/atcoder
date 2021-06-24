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
  ll l,r;
  cin>>l>>r;
  vector<ll> v(101),w(101);
  REP(i,l){
    ll a;
    cin>>a;
    v[a]++;
  }
  REP(i,r){
    ll a;
    cin>>a;
    w[a]++;
  }
  ll sum=0;
  FOR(i,1,101){
    sum+=min(v[i],w[i]);
  }
  cout<< sum <<endl;
  return 0;
}
