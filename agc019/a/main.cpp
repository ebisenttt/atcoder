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
  vector<ll> v(4);
  REP(i,4){
    cin>>v[i];
  }
  ll n;
  cin>>n;
  vector<ll> w={8,4,2,1};
  REP(i,4){
    w[i]*=v[i];
  }
  if(n==1)w[3]=INF;
  ll ans;
  if(MIN(w)==w[3]&&n%2!=0){
    ans=w[3]*(n/2);
    w[3]=INF;
    ans+=MIN(w)/2;
  }else{
    ans=(ld)MIN(w)/2.0*n;
  }
  cout<<ans<<endl;
  return 0;
}
