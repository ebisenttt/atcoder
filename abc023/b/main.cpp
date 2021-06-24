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
  ll n;
  string s;
  cin>>n>>s;
  vector<string> v(n);
  v[0]="b";
  FOR(i,1,n-1){
    if(i%3==1){
      v[i]="a"+v[i-1]+"c";
    }else if(i%3==2){
      v[i]="c"+v[i-1]+"a";
    }else{
      v[i]="b"+v[i-1]+"b";
    }
  }
  REP(i,n){
    if(v[i]==s){
      cout<<i<<endl;
      return 0;
    }
  }
  cout<<-1<<endl;
  return 0;
}
