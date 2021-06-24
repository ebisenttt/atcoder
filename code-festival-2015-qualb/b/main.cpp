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
  ll n,m;
  cin>>n>>m;
  map<ll,ll> list;
  vector<ll> v;
  REP(i,n){
    ll num;
    cin>>num;
    if(list.find(num)==list.end()){
      list.insert(make_pair(num,1));
      v.push_back(num);
    }else{
      list.at(num)++;
    }
  }
  ll M=0, ans;
  REP(i,SIZE(v)){
    if(M<list.at(v[i])){
      M=list.at(v[i]);
      ans=v[i];
    }
  }
  if(M>n/2){
    cout<<ans<<endl;
  }else{
    cout<<"?"<<endl;
  }
  return 0;
}
