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
  string a,b,c;
  cin>>n>>a>>b>>c;
  ll cnt=0;
  REP(i,n){
    if(a[i]==b[i]&&b[i]==c[i]&&c[i]==a[i])continue;
    else if(a[i]==b[i]||b[i]==c[i]||c[i]==a[i])cnt++;
    else cnt+=2;
  }
  cout<<cnt<<endl;
  return 0;
}
