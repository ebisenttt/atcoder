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
  int n,k;
  cin>>n>>k;
  int ans = 0;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= k; j++){
      ans += i * 100 + j;
    }
  }
  cout<<ans<<endl;
  return 0;
}
