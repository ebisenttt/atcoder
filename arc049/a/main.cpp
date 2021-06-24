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
  string s;
  cin>>s;
  vector<ll> v(4);
  REP(i,4)cin>>v[i];
  REP(i,s.size()){
    if(find(ALL(v),i)!=v.end())cout<<'"';
    cout<<s[i];
  }
  if(find(ALL(v),s.size())!=v.end())cout<<'"';
  cout<<endl;
  return 0;
}
