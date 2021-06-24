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
  string s,t;
  cin>>s>>t;
  if(SIZE(s)!=SIZE(t)){
    cout<<-1<<endl;
    return 0;
  }
  ll n=SIZE(s);
  REP(i,n){
    if(s==t){
      cout<<i<<endl;
      return 0;
    }
    s=s.substr(n-1)+s.substr(0,n-1);
  }
  cout<<-1<<endl;
  return 0;
}
