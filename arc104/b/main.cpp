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
  string s;
  cin>>n>>s;
  vector<char> v={'A','T','C','G'};
  ll cnt=0;
  vector<vector<ll>> w(n+1,vector<ll>(4));
  FOR(i,1,n+1){
    w[i]=w[i-1];
    REP(j,4){
      if(v[j]==s[i-1]){
        w[i][j]++;
        break;
      }
    }
  }
  ;
  FOR(i,2,n+1){
    REP(j,n+1-i){
      ll a=w[j+i][0]-w[j][0], t=w[j+i][1]-w[j][1];
      ll c=w[j+i][2]-w[j][2], g=w[j+i][3]-w[j][3];
      if(a==t&&c==g)cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
