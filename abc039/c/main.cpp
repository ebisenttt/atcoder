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
  string t = "WBWBWWBWBWBW";
  t=t+t+t;
  ll n=t.length();
  vector<string> v={"Do","","Re","","Mi","Fa","","So","","La","","Si"};
  REP(i,n/2){
    if(s==t.substr(i,20)){
      cout<<v[i]<<endl;
      break;
    }
  }
  return 0;
}
