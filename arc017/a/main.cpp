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
  FOR(i,2,sqrt(n)+1){
    bool isprime=true;
    REP(j,v.size()){
      if(i%v[j]==0){
        isprime=false;
        break;
      }
    }
    if(isprime)v.push_back(i);
  }
  REP(i,v.size()){
    if(n%v[i]==0){
      cout<<"NO"<<endl;
      return 0;
    }
  }
  if(n==1)cout<< "NO" <<endl;
  else cout<< "YES" <<endl;
  return 0;
}
