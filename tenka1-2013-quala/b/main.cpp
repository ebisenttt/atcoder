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
  ll cnt=0;
  REP(i,n){
    ll sum=0;
    REP(j,5){
      ll a;
      cin>>a;
      sum+=a;
    }
    if(sum<20)cnt++;
  }
  cout<< cnt <<endl;
  return 0;
}
