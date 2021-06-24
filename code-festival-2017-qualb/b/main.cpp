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
  ll n;
  cin>>n;
  map<ll,ll> mp;
  REP(i,n){
    ll d;
    cin>>d;
    if(mp.count(d)>0){
      mp.at(d)++;
    }else{
      mp.insert(make_pair(d,1));
    }
  };
  ll m;
  cin>>m;
  bool is=true;
  REP(i,m){
    ll t;
    cin>>t;
    if(mp.count(t)>0){
      mp.at(t)--;
      if(mp.at(t)<0){
        is=false;
        break;
      }
    }else{
      is=false;
      break;
    }
  }
  string ans = is? "YES":"NO";
  cout<<ans<<endl;
  return 0;
}
