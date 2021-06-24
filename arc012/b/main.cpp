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
  ld n,a,b,l;
  cin>>n>>a>>b>>l;
  ld x=0,y=l;
  REP(i,n){
    ld s=(y-x)/a;
    x=y;
    y+=s*b;
  }
  cout<<fixed<<setprecision(7)<<y-x<<endl;
  return 0;
}
