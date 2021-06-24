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
  cin>>n;
  vector<string> v;
  set<string> s;
  REP(i,n){
    string str;
    cin>>str;
    v.push_back(str);
    s.insert(str);
  }
  int m;
  cin>>m;
  vector<string> w;
  REP(i,m){
    string str;
    cin>>str;
    w.push_back(str);
  }
  int max=0;
  for(auto a:s){
    int cnt=0;
    REP(i,n){
      if(v[i]==a)cnt++;
    }
    REP(i,m){
      if(w[i]==a)cnt--;
    }
    if(max<cnt)max=cnt;
  }
  cout<<max<<endl;
  return 0;
}
