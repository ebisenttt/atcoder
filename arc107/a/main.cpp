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
  vector<ll> v(3);
  ll sum=1;
  REP(i,3){
    cin>>v[i];
  }
  REP(i,3){
    ll a = v[i];
    sum*=(a*(a+1)/2)%998244353;
    sum=sum%998244353;
  }
  cout<<sum<<endl;
  return 0;
}
