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
  int x,a,b,c;
  cin>>a>>b>>c>>x;
  int cnt=0;
  REP(i,a+1){
    REP(j,b+1){
      REP(k,c+1){
        if(500*i+100*j+50*k==x)cnt++;
      }
    }
  }
  cout<<cnt<<endl;
  return 0;
}
