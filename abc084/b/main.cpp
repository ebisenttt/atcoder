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
  int a,b;
  string s;
  cin>>a>>b>>s;
  bool is=true;
  REP(i,a+b+1){
    if(i==a){
      if(s[i]!='-')is=false;
    }else{
      if(s[i]<48||s[i]>57)is=false;
    }
  }
  string ans=is?"Yes":"No";
  cout<<ans<<endl;
  return 0;
}
