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
  ll m=pow(2,n)/2;
  vector<ll> v(m), w(m);
  REP(i,m)cin>>v[i];
  REP(i,m)cin>>w[i];
  ll a=MAX(v), b=MAX(w);
  ll c=min(a,b);
  ll itr;
  REP(i,m){
    if(v[i]==c){
      itr=i+1;
      break;
    }
  }
  REP(i,m){
    if(w[i]==c){
      itr=i+1+m;
      break;
    }
  }
  cout<< itr <<endl;
  return 0;
}
