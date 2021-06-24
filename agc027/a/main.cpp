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
  ll n,x;
  cin>>n>>x;
  ll cnt=0;
  vector<ll> v(n);
  REP(i,n)cin>>v[i];
  sort(ALL(v));
  REP(i,n){
    x-=v[i];
    if(x>=0)cnt++;
    else break;
  }
  if(x>0)cnt--;
  cout<<cnt<<endl;
  return 0;
}
