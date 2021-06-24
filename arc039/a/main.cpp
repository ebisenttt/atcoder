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
  cin>>a>>b;
  string c=to_string(a),d=to_string(b);
  REP(i,3){
    if(c[i]!='9'){
      c[i]='9';
      break;
    }
  }
  REP(i,3){
    if(d[i]!='1'&&i==0){
      d[i]='1';
      break;
    }else if(d[i]!='0'&&i!=0){
      d[i]='0';
      break;
    }
  }
  int e=stoi(c), f=stoi(d);
  int ans=max(a-f,max(a-b,e-b));
  cout<<ans<<endl;

  return 0;
}
