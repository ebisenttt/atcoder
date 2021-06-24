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
  ll n,k;
  cin>>n>>k;
  vector<ll> v(n+1);
  FOR(i,1,n)cin>>v[i];
  FOR(i,1,n)v[i]+=v[i-1];
  FOR(i,3,n){
    if(v[i]-v[i-3]<k){
      cout<<i<<endl;
      return 0;
    }
  }
  cout<< -1 <<endl;
  return 0;
}
