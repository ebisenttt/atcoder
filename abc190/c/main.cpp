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
  vector<pair<int,int>> v(m);
  REP(i,m){
    int a,b;
    cin>>a>>b;
    a--, b--;
    v[i]=make_pair(a,b);
  }
  ll k;
  cin>>k;
  vector<pair<int,int>> select(k);
  REP(i,k){
    int a,b;
    cin>>a>>b;
    a--, b--;
    select[i]=make_pair(a,b);
  }
  ll ans=0;
  REP(i,1<<k){
    bitset<16> bit(i);
    vector<int> dish(n);
    REP(j,k){
      int num;
      if(bit[j])num=select[j].first;
      else num=select[j].second;
      dish[num]++;
    }
    ll cnt=0;
    REP(i,m){
      pair p=v[i];
      int a=p.first, b=p.second;
      if(dish[a]>0&&dish[b]>0)cnt++;
    }
    ans=max(ans,cnt);
  }
  cout<<ans<<endl;
  return 0;
}
