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
  ll a,b,c,k;
  cin>>a>>b>>c>>k;
  ll cnt=0;
  while(a>=b){
    b*=2;
    cnt++;
  }
  while(b>=c){
    c*=2;
    cnt++;
  }
  string ans=cnt<=k?"Yes":"No";
  cout<<ans<<endl;
  return 0;
}
