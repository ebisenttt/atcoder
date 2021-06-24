#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1e9 
typedef long long ll;
typedef long double ld;
int main(){
  string s;
  cin>>s;
  ll n = SIZE(s);
  string ans="NO";
  REP(i,n){
    REP(j,n-i){
      string t=s.substr(0,i)+s.substr(i+j);
      if(t=="keyence")ans="YES";
    }
  }
  cout<<ans<<endl;
  return 0;
}
