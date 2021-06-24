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
  ll n,a,b;
  cin>>n>>a>>b;
  ll sum=0;
  REP(i,n){
    string c;
    ll m;
    cin>>c>>m;
    if(c=="East")sum+=max(a,min(b,m));
    else sum-=max(a,min(b,m));
  }
  if(sum==0)cout<< 0 <<endl;
  else if(sum>0)cout<< "East " << sum <<endl;
  else cout<< "West " << -1*sum <<endl;
  return 0;
}
