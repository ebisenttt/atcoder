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
  string s,t;
  char b;
  REP(i,6){
    string c;
    cin>>c;
    s+=c;
  }
  cin>>b;
  REP(i,6){
    string c;
    cin>>c;
    t+=c;
  }
  ll x=0,y=0;
  REP(i,6){
    REP(j,6){
      if(s[i]==t[j])x++;
    }
  }
  REP(i,6)if(t[i]==b)y++;
  ll ans;
  if(x==6)ans=1;
  else if(x==5&&y==1)ans=2;
  else if(x==5)ans=3;
  else if(x==4)ans=4;
  else if(x==3)ans=5;
  else ans=0;
  cout<<ans<<endl;
  return 0;
}
