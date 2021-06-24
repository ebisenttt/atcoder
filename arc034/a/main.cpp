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
  ld m=0;
  REP(i,n){
    ld sum=0;
    REP(j,5){
      ld a;
      cin>>a;
      if(j==4)sum+=a*110.0/900.0;
      else sum+=a;
    }
    if(m<sum)m=sum;
  }
  cout<<fixed<<setprecision(5)<<m<<endl;
  return 0;
}
