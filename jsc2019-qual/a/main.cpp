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
  ll m,d;
  cin>>m>>d;
  ll cnt=0;
  FOR(i,1,m+1){
    FOR(j,1,d+1){
      ll a=j/10, b=j%10;
      if(a>=2&&b>=2&&a*b==i)cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
