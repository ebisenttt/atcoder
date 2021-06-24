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
  string s;
  cin>>s;
  vector<string> w;
  REP(i,1<<4){
    vector<string> v={"","K","I","H","","B","","R",""};
    bitset<4> b(i);
    for(int j=3;j>=0;j--){
      if(b[j]){
        ll x[]={8,6,4,0};
        v[x[j]]="A";
      }
    }
    string str="";
    REP(j,SIZE(v)){
      str+=v[j];
    }
    w.push_back(str);
  }
  string ans= find(ALL(w),s)==w.end() ? "NO" : "YES";
  cout<<ans<<endl;
  return 0;
}
