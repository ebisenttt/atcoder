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
  ll a,b,x,y;
  cin>>a>>b>>x>>y;
  ll ans;
  ll d=b-a;
  if(d>0){
    if(2*x>y){
      ans=d*y+x;
    }else{
      ans=2*x*d+x;
    }
  }else if(d<0){
    if(2*x>y){
      ans=(-d-1)*y+x;
    }else{
      ans=(-d-1)*2*x+x;
    }
  }else{
    ans=x;
  }
  cout<<ans<<endl;
  return 0;
}
