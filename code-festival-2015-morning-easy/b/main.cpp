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
  if(n%2==1){
    cout<<-1<<endl;
    return 0;
  }
  ll cnt=0;
  REP(i,n/2){
    if(s[i]!=s[n/2+i])cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}
