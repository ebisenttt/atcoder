#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1e9 
typedef long long ll;
typedef long double ld;

int main(){
  ll n;
  cin>>n;
  vector<vector<ld>> v(n,vector<ld>(2));
  REP(i,n){
    ld a,b;
    cin>>a>>b;
    v[i]={a,b};
  }
  sort(ALL(v));
  ll cnt=0;
  REP(i,n){
    FOR(j,i,n){
      ld m=(v[j][1]-v[i][1])/(v[j][0]-v[i][0]);
      if(-1<=m&&m<=1)cnt++;
    }
  }
  cout<< cnt <<endl;
  return 0;
}
