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
  ll n,m,t;
  cin>>n>>m>>t;
  ll max=n;
  ll from=0;
  REP(i,m){
    ll a,b;
    cin>>a>>b;
    n-=(a-from);
    if(n<=0){
      cout<<"No"<<endl;
      return 0;
    }
    n=min(max,n+b-a);
    from=b;
  }
  n-=(t-from);
  if(n<=0){
    cout<<"No"<<endl;
    return 0;
  }
  cout<<"Yes"<<endl;
  return 0;
}
