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
  ll n,t;
  cin>>n>>t;
  ll sum=0, rest=0;
  vector<ll> v(n);
  REP(i,n){
    cin>>v[i];
  }
  ll a=v[0], b=a+t;
  REP(i,n-1){
    ll c=v[i+1], d=c+t;
    if(c<b){
      b=d;
    }else{
      sum+=b-a;
      a=c, b=d;
    }
  };
  sum+=b-a;
  cout<<sum<<endl;
  return 0;
}
