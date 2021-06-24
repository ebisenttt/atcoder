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
  string a,b,c;
  cin>>a>>b>>c;
  vector<string> v={a,b,c};
  vector<char> w={'a','b','c'};
  ll now, next=0;
  while(v[next].size()!=0){
    now=next;
    REP(i,3){
      if(w[i]==v[now][0]){
        next=i;
      }
    };
    v[now]=v[now].substr(1);
  }
  vector<string> ans={"A","B","C"};
  cout<<ans[next]<<endl;
  return 0;
}
