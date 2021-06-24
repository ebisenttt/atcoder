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
  ld n;
  cin>>n;
  vector<ld> v(n);
  REP(i,n){
    cin>>v[i];
  }
  ld sum=0;
  REP(i,n-1){
    sum+=v[i+1]-v[i];
  }
  cout<<fixed<<setprecision(5)<<sum/(n-1)<<endl;
  return 0;
}
