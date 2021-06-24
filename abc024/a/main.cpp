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
  ll a,b,c,k,s,t;
  cin>>a>>b>>c>>k>>s>>t;
  if(s+t<k)cout<<a*s+b*t<<endl;
  else cout<<max(a*s+b*t-(s+t)*c,(ll)0)<<endl;

  return 0;
}
