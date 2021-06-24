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
  ll n,m,x;
  cin>>n>>m>>x;
  vector<vector<ll>> v(n,vector<ll> (m+1));
  REP(i,n){
    REP(j,m+1){
      cin>>v[i][j];
    }
  }
  ll price=INF;
  REP(i,1<<n){
    vector<ll> sum(m+1);
    bitset<13> bit(i);
    REP(j,n){
      if(bit[j]){
        REP(k,m+1){
          sum[k]+=v[j][k];
        }
      }
    }
    bool is=true;
    FOR(j,1,m+1){
      if(sum[j]>=x){
        continue;
      }else{
        is=false;
        break;
      }
    }
    if(is&&price>sum[0]){
      price=sum[0];
    }
  }
  ll ans=price==INF?-1:price;
  cout<<ans<<endl;
  return 0;
}
