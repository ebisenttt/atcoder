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
  vector<vector<char>> v(h+2,vector<char> (w+2,'#'));
  FOR(i,1,h+1){
    FOR(j,1,w+1){
      cin>>v[i][j];
    }
  }
  REP(i,h+2){
    REP(j,w+2){
      cout<<v[i][j];
      if(j==w+1)cout<<endl;
    }
  }
  return 0;
}
