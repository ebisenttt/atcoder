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
  string a,b;
  cin>>a>>b;
  ll c=stoll(a);
  b=b.substr(0,1)+b.substr(2);
  ll d=stoll(b);
  ll prd=c*d;
  cout<<prd/100<<endl;
  return 0;
}

