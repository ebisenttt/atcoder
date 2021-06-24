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
  ll n,m;
  cin>>n>>m;
  vector<ll> v(n),w(n);
  ll vsum=0, wsum=0;
  REP(i,n){
    cin>>v[i];
    vsum+=v[i];
  }
  REP(i,n){
    cin>>w[i];
    wsum+=w[i];
  }
  if(vsum!=wsum){
    cout<<"No"<<endl;
    return 0;
  }
  vector<vector<ll>> node(n);
  REP(i,m){
    ll from,to;
    cin>>from>>to;
    from--;
    to--;
    node[from].push_back(to);
    node[to].push_back(from);
  }
  REP(i,n){
    if(node[i].size()==0){
      if(v[i]==w[i]){
        continue;
      }else{
        cout<<"No"<<endl;
        return 0;
      }
    }
  }
  cout<<"Yes"<<endl;
  
  return 0;
}
