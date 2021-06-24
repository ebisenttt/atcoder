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
  ll n,k;
  cin>>n>>k;
  ll x,y;
  ll cnt=0;
  FOR(i,2,2*n+1){
    x=i;
    y=x-k;
    if(y>=2&&y<2*n+1){
      ll a=x>n?std::abs(x-2*n)+1:x-1;
      ll b=y>n?std::abs(y-2*n)+1:y-1;
      cnt+=a*b;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
