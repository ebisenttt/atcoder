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
  cin>>n;
  char v[n][9];
  REP(i,n){
    REP(j,9){
      cin>>v[i][j];
    }
  }
  ll cnt=0;
  REP(i,9){
    REP(j,n){
      if(v[j][i]=='x'){
        cnt++;
        v[j][i]='.';
      }
    }
  }
  REP(i,9){
    REP(j,n-1){
      if(j==0&&v[j][i]=='o')cnt++;
      else if(v[j][i]=='.'&&v[j+1][i]=='o')cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
