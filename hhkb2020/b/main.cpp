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
  vector<vector<char>> v(h+1,vector<char> (w+1));
  REP(i,h)REP(j,w)cin>>v[i][j];
  ll cnt=0;
  REP(i,h){
    REP(j,w){
      if(v[i][j]=='.'&&v[i][j+1]=='.')cnt++;
      if(v[i][j]=='.'&&v[i+1][j]=='.')cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
