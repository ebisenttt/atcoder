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
  ll v[n][2], w[m][2];
  REP(i,n){
    cin>>v[i][0]>>v[i][1];
  }
  REP(i,m){
    cin>>w[i][0]>>w[i][1];
  }
  REP(i,n){
    ll M=INF;
    ll num;
    REP(j,m){
      ll dist=abs(v[i][0]-w[j][0])+abs(v[i][1]-w[j][1]);
      if(M>dist){
        num=j+1;
        M=dist;
      }
    }
    cout<<num<<endl;
  }
  return 0;
}
