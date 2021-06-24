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
  vector<ll> v(3),w(3);
  REP(i,3){
    cin>>v[i];
  }
  REP(i,3){
    cin>>w[i];
  }
  ll m=0;
  sort(ALL(v));
  do{
    ll prd=1;
    REP(i,3){
      prd*=v[i]/w[i];
    }
    if(prd>m)m=prd;
  }while(next_permutation(ALL(v)));
  cout<<m<<endl;
  return 0;
}
