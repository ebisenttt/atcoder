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
  ll n,m;
  string s,t;
  cin>>n>>m>>s>>t;
  set<ll> st;
  bool is=true;
  REP(i,lcm(n,m)/m){
    st.insert(i*m);
    cout<<i*m<<" ";
  }
  cout<<endl;
  REP(i,lcm(n,m)/n){
    ll itr=i*n;
    cout<<itr<<" ";
    if(st.count(itr)>0){
      if(s[i]==t[itr/m]){
        continue;
      }else{
        //cout<<i<<" "<<itr/m;
        is=false;
        break;
      }
    }else{
      continue;
    }
  }
  cout<<endl;
  if(is){
    cout<<lcm(n,m)<<endl;
  }else{
    cout<<-1<<endl;
  }
  return 0;
}
