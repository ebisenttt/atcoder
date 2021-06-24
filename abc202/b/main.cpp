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
  string str;
  cin>>str;
  vector<int> ans(str.size());
  REP(i,str.size()){
    int c = str[i] - '0';
    if(c == 6)ans[i] = 9;
    else if(c == 9)ans[i] = 6;
    else ans[i] = c;
  }
  REP(i,str.size())cout<<ans[str.size() - i - 1];
  cout<<endl;
  return 0;
}
