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
int money(ll a){
  if(a==1)return 300000;
  else if(a==2) return 200000;
  else if(a==3) return 100000;
  else return 0;
}
int main(){
  ll a,b;
  cin>>a>>b;
  ll ans=money(a)+money(b);
  if(ans==600000)ans=1000000;
  cout<<ans<<endl;
  return 0;
}
