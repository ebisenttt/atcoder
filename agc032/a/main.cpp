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
  vector<ll> v(n),w;
  REP(i,n)cin>>v[i];
  for(int i=v.size();i>0;i--){
    if(v[i-1]==i){
      w.push_back(i);
      v.erase(v.begin()+i-1);
      i=v.size()+1;
    }
  }
  if(v.size()==0){
    for(int i=n-1;i>-1;i--){
      cout<< w[i] <<endl;
    }
  }else{
    cout<< -1 <<endl;
  }
  return 0;
}