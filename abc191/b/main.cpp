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
  ll n, x;
  cin>>n>>x;
  vector<ll> v;
  REP(i,n){
    ll a;
    cin>>a;
    if(a!=x){
      v.push_back(a);
    }
  }
  ll len = v.size();
  REP(i,len){
    cout<<v[i];
    if(i!=len-1){
      cout<<" ";
    }
  }
  cout<<endl;
  return 0;
}
