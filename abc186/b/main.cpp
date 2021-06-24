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
  ll h,w;
  cin>>h>>w;
  ll v[h][w];
  ll M=INF;
  REP(i,h){
    REP(j,w){
      cin>>v[i][j];
      if(M>v[i][j])M=v[i][j];
    }
  }
  ll cnt=0;
  REP(i,h){
    REP(j,w){
      cnt+=v[i][j]-M;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
