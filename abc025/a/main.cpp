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
  string s;
  cin>>s>>n;
  REP(i,5){
    REP(j,5){
      n--;
      if(n==0)cout<<s.substr(i,1)+s.substr(j,1)<<endl;
    }
  }
  return 0;
}
