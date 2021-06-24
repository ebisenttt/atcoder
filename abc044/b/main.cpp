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
  map<char,ll> m;
  REP(i,s.size()){
    if(m.count(s[i])>0){
      m.at(s[i])++;
    }else{
      m.insert(make_pair(s[i],1));
    }
  }
  for(auto a: m){
    if(a.second%2!=0){
      cout<< "No" <<endl;
      return 0;
    }
  }
  cout<< "Yes" <<endl;
  return 0;
}
