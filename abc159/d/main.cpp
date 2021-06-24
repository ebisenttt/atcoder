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
  map<ll,ll> m;
  vector<ll> v(n);
  REP(i,n){
    ll a;
    cin>>a;
    v[i]=a;
    if(m.count(a)>0){
      m.at(a)++;
    }else{
      m.insert(make_pair(a,1));
    }
  }
  ll sum=0;
  for(auto itr=m.begin(); itr!=m.end(); itr++){
    ll num=itr->second;
    sum+=num*(num-1)/2;
  }
  REP(i,n){
    ll num=m.at(v[i]);
    cout<<sum-num*(num-1)/2+(num-1)*(num-2)/2<<endl;
  }
  return 0;
}
