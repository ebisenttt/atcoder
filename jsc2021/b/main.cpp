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
  int n, m;
  cin >> n >> m;
  vector<int> a(1010), b(1010), ans;
  REP(i,n){
    int c;
    cin >> c;
    a[c]++; 
  }
  REP(i,m){
    int c;
    cin >> c;
    b[c]++;
  }
  REP(i,1010){
    if(a[i] ^ b[i])ans.push_back(i);
  }
  REP(i,ans.size()){
    cout << ans[i];
    if(i != ans.size() - 1)cout << " ";
  }
  cout << endl;
  return 0;
}
