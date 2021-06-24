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
  ll t;
  cin>>t;
  ll ans;
  REP(i,t){
    ll n,s,k;
    cin>>n>>s>>k;
    if(gcd(n,s)==1){
      ll r=n%s;
      ans=(n-k)/r;
    }else if((n-s)%k==0){
      ans=(n-s)/k;
    }else{
      ans=-1;
    }
    cout<<ans<<endl;
  }
  return 0;
}
