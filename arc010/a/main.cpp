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
  ll n,m,a,b;
  cin>>n>>m>>a>>b;
  REP(i,m){
    if(n<=a)n+=b;
    ll c;
    cin>>c;
    n-=c;
    if(n<0){
      cout<< i+1 <<endl;
      return 0;
    }
  }
  cout<< "complete" <<endl;
  return 0;
}
