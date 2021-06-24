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
  vector<int> v,w={1,4,7,9};
  REP(i,4){
    int s;
    cin>>s;
    v.push_back(s);
  }
  sort(ALL(v));
  string ans = v==w?"YES":"NO";
  cout<<ans<<endl;
  return 0;
}
