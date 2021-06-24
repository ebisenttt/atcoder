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
  ll m=INF;
  FOR(i,1,sqrt(n)+1){
    ll x=i, y=n/i;
    ll r=n-x*y;
    if(m>abs(x-y)+r)m=abs(x-y)+r;
  }
  cout<<m<<endl;
  return 0;
}
