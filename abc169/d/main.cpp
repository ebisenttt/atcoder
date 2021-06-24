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
  FOR(i,2,sqrt(n)+1){
    ll num=i;
    while(n%num==0){
      cnt++;
      n/=num;
      num*=i;
    }
    while(n%i==0){
      n/=i;
    }
  }
  if(n!=1)cnt++;
  cout<< cnt <<endl;
  return 0;
}
