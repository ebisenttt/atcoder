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
  ll n;
  cin>>n;
  set<string> s;
  REP(i,n){
    string t;
    cin>>t;
    string u;
    if(t[0]=='!')u=t.substr(1);
    else u="!"+t;
    if(s.count(u)>0){
      cout<< regex_replace(u,regex("!"),"") <<endl;
      return 0;
    }else{
      s.insert(t);
    }
  }
  cout<< "satisfiable" <<endl;
  return 0;
}
