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
  vector<ll> v;
  FOR(i,2,n){
    bool is=true;
    REP(j,v.size()){
      if(i%v[j]==0){
        is=false;
        break;
      }
    }
    if(is)v.push_back(i);
  }
  cout<< v.size() <<endl;
  return 0;
}
