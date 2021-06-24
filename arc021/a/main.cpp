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
  vector<vector<ll>> v(6,vector<ll>(6));
  FOR(i,1,5)FOR(j,1,5)cin>>v[i][j];
  vector m={1,-1};
  FOR(i,1,5){
    FOR(j,1,5){
      REP(x,2){
          if(v[i][j]==v[i+m[x]][j]||v[i][j]==v[i][j+m[x]]){
            cout<< "CONTINUE" <<endl;
            return 0;
          }
      }
    }
  }
  cout<< "GAMEOVER" <<endl;
  return 0;
}
