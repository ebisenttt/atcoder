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
  vector<ll> v,w;
  ll num=1e18;
  ll k=1;
  while(k<100){
    if(powl(3,k)<num)v.push_back(powl(3,k));
    if(powl(5,k)<num)w.push_back(powl(5,k));
    k++;
  }
  REP(i,SIZE(v)){
    REP(j,SIZE(w)){
      if(v[i]+w[j]==n){
        cout<<i+1<<" "<<j+1<<endl;
        return 0;
      }
    }
  }
  cout<<-1<<endl;
  return 0;
}
