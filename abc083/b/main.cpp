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
  int n,a,b;
  cin>>n>>a>>b;
  ll sum=0;
  FOR(i,1,n+1){
    string s=to_string(i);
    int cnt=0;
    REP(j,s.size()){
      cnt+=s[j]-48;
    }
    if(cnt>=a&&b>=cnt)sum+=i;
  }
  cout<<sum<<endl;
  return 0;
}
