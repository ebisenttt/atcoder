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
  vector<char> v(6);
  REP(i,6){
    cin>>v[i];
  }
  string ans = v[0]==v[5]&&v[1]==v[4]&&v[2]==v[3]?"YES":"NO";
  cout<<ans<<endl;
  return 0;
}
