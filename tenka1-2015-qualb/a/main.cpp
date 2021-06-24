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
  vector<ll> v(20);
  REP(i,20){
    ll num;
    if(i==0)num=100;
    else if(i==1)num=100;
    else if(i==2)num=200;
    else num=v[i-1]+v[i-2]+v[i-3];
    v[i]=num;
  }
  cout<<v[19]<<endl;
  return 0;
}
