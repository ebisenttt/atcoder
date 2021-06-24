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
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  vector<vector<char>> v(h, vector<char> (w));
  REP(i,h)REP(j,w)cin >> v[i][j];
  x--;
  y--;
  int ans = 0;
  for(int i = x; i >= 0; i--){
    if(v[i][y] == '.')ans++;
    else break;
  }
  for(int i = x + 1; i < h; i++){
    if(v[i][y] == '.')ans++;
    else break;
  }
  for(int i = y-1; i >= 0; i--){
    if(v[x][i] == '.')ans++;
    else break;
  }
  for(int i = y+1; i < w; i++){
    if(v[x][i] == '.')ans++;
    else break;
  }
  cout << ans <<endl;
  return 0;
}
