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
  ll n,t;
  cin>>n>>t;
  vector<ll> v(10000000);
  REP(i,n){
    ll a;
    cin>>a;
    v[a]++;
    v[a+t]--;
  }
  FOR(i,1,v.size()){
    v[i]+=v[i-1];
  }
  ll cnt=0;
  REP(i,v.size()){
    if(v[i]>0)cnt++;
  }
  cout<< cnt <<endl;
  return 0;
}
