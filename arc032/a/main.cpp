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
  ll m=n*(n+1)/2;
  vector<ll> v;
  FOR(i,2,sqrt(m)+1){
    bool is = true;
    for(auto a: v){
      if(i%a==0){
        is=false;
        break;
      }
    }
    if(is)v.push_back(i);
  }
  bool isprime=true;
  for(auto a: v){
    if(m%a==0){
      isprime=false;
      break;
    }
  }
  if(n==1)isprime=false;
  string ans=isprime?"WANWAN":"BOWWOW";
  cout<<ans<<endl;
  return 0;
}
