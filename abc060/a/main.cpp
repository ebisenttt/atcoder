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
  ll p=a.size()-1, q=b.size()-1;
  string ans =(a[p]==b[0]&&b[q]==c[0])? "YES":"NO";
  cout<<ans<<endl;
  return 0;
}
