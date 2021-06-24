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
  ll k,a,b;
  cin>>k>>a>>b;
  ll ans;
  if(k==1){
    ans=2;
  }else if(b-a<=2){
    ans=k+1;
  }else if((k-a+1)%2==0){
    ans=a+(k-a+1)/2*(b-a);
  }else{
    ans=a+1+(k-a)/2*(b-a);
  }
  cout<<ans<<endl;
  return 0;
}
