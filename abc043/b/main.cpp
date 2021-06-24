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
  string s;
  cin>>s;
  ll n=s.size();
  string ans="";
  REP(i,n){
    if(s[i]=='0')ans+="0";
    else if(s[i]=='1')ans+="1";
    else ans=ans.substr(0,ans.size()-1);
  }
  cout<<ans<<endl;
  return 0;
}
