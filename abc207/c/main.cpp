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
  cin >> n;
  vector<pair<double,double>> v(n);
  REP(i,n){
    ll t;
    double l, r;
    cin >> t >> l >> r;
    if(t == 2)r-=0.1;
    else if(t==3)l+=0.1;
    else if(t==4){
      l+=0.1;
      r-=0.1;
    }
    v[i] = {l,r};
  }
  ll cnt = 0;
  REP(i,n-1){
    FOR(j,i+1,n){
      if(v[j].first <= v[i].second && v[i].first <= v[j].second)cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
