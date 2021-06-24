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
  int n;
  string s;
  cin>>n>>s;
  /*
  while(s.find("fox")!=string::npos){
    auto a = s.find("fox");
    s = s.replace(a, 3, "");
  }
  */
  
    REP(i,s.size()-2){
      if(s.size()<3)break;
      if(s.substr(i,3)=="fox"){
        s=s.substr(0,i)+s.substr(i+3,s.size()-i-3);
        i=max(-1,i-3);
      }
    }
  cout<<s.size()<<endl;
  return 0;
}