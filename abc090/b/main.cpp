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
  ll a,b;
  cin>>a>>b;
  ll cnt=0;
  FOR(i,a,b+1){
    string str=to_string(i);
    bool is=true;
    REP(j,str.size()/2){
      if(str[j]==str[str.size()-j-1]){
        continue;
      }else{
        is=false;
        break;
      }
    }
    if(is)cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}
