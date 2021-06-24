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
  vector<ll> v(46);
  REP(i,46){
    if(i<2)v[i]=1;
    else v[i]=v[i-1]+v[i-2];
  }
  cout<<v[n]<<endl;
  return 0;
}
