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
  vector<vector<ll>> v={{1,3,5,7,8,10,12},{4,6,9,11},{2}};
  ll x,y;
  cin>>x>>y;
  ll a,b;
  REP(i,3){
    if(find(ALL(v[i]),x)!=v[i].end())a=i;
    if(find(ALL(v[i]),y)!=v[i].end())b=i;
  }
  if(a==b)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
