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
  vector<ll> v(4);
  ll sum=0;
  REP(i,4){
    cin>>v[i];
    sum+=v[i];
  }
  REP(i,1<<4){
    ll num=0;
    bitset<4> bit(i);
    REP(i,4){
      if(bit[i])num+=v[i];
    }
    if(sum==num*2){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;
  return 0;
}
