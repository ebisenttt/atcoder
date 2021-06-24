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
  int h,w;
  cin>>h>>w;
  vector<vector<char>> v(h+2,vector<char>(w+2));
  FOR(i,1,h+1){
    FOR(j,1,w+1){
      cin>>v[i][j];
    }
  }
  vector<int> a={-1,0,1};
  FOR(i,1,h+1){
    FOR(j,1,w+1){
      if(v[i][j]=='.'){
        int cnt=0;
        REP(p,3){
          REP(q,3){
            if(v[i+a[p]][j+a[q]]=='#')cnt++;
          }
        }
        v[i][j]='0'+cnt;
      }
    }
  }
  FOR(i,1,h+1){
    FOR(j,1,w+1){
      cout<<v[i][j];
      if(j==w){
        cout<<endl;
      }
    }
  }
  return 0;
}
