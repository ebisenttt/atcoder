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
  ll h,w;
  cin>>h>>w;
  vector<vector<char>> v(h,vector<char> (w));
  REP(i,h){
    REP(j,w){
      cin>>v[i][j];
    }
  }
  ll cnt=0;
  vector<ll> x={1,1,-1,-1}, y={1,-1,1,-1};
  FOR(i,1,h-1){
    FOR(j,1,w-1){
      REP(p,4){
        ll numx=x[p], numy=y[p];
        if(v[i][j]=='#'&&v[i+numx][j]=='.'&&v[i][j+numy]=='.')cnt++;
        else if(v[i][j]=='#'&&v[i+numx][j]=='#'&&v[i][j+numy]=='#'&&v[i+numx][j+numy]=='.')cnt++;
      }
    }
  }
  cout<<cnt<<endl;
  return 0;
}
