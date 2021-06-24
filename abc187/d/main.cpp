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
  vector<vector<ll>> v(n,vector<ll> (3));
  REP(i,n){
    ll a,b;
    cin>>a>>b;
    v[i]={b+a*2,a,b};
  }
  sort(ALL(v),greater());
  //ll suma=0;
  ll suma=0;
  REP(i,n){
    suma+=v[i][1];
  }
  ll l=0, r=suma;
  //cout<<"l:"<<l<<" r:"<<r<<endl;
  REP(i,n){
      l+=v[i][1]+v[i][2];
      r-=v[i][1];
      if(l>r){
        cout<< i+1 <<endl;
        break;
      }
    //cout<<"l:"<<l<<" r:"<<r<<endl;
  }
  return 0;
}
