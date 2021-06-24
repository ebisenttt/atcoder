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
  ll n,k;
  cin>>n>>k;
  map<ll, ll> mp;
  REP(i,n){
    ll a, b;
    cin>>a>>b;
    if(mp.count(a) > 0)mp.at(a)+=b;
    else mp.insert(make_pair(a, b));
  }
  ll now = 0;
  for(auto p: mp){
    if(p.first > now + k){
      break;
    }else{
      k = k - (p.first - now) + p.second;
      now = p.first;
    }
  }
  now += k;
  cout<<now<<endl;
  return 0;
}
