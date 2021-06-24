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
  ll n;
  cin>>n;
  vector<ll> v(n),w(n-1);
  REP(i,n){
    cin>>v[i];
  }
  sort(ALL(v));
  REP(i,n-1){
    w[i]=v[i+1]-v[i];
  }
  ll sum=0;
  REP(i,n-1){
    sum+=w[i]*(i+1)*(n-1-i);
  }
  cout<<sum<<endl;
  return 0;
}
