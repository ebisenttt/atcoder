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
  ll y;
  cin>>y;
  bool is;
  if(y%4==0){
    if(y%100==0){
      if(y%400==0){
        is=true;
      }else{
        is=false;
      }
    }else{
      is=true;
    }
  }else{
    is=false;
  }
  string ans=is?"YES":"NO";
  cout<<ans<<endl;
  return 0;
}
