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
  vector<ll> x(n), y(n);
  vector<vector<ll>> v(n, vector<ll>(2)), w(n, vector<ll>(2));
  REP(i,n){
    ll a,b;
    cin >> a >> b;
    v[i] = {a, i};
    w[i] = {b, i};
    x[i] = a;
    y[i] = b;
  }
  sort(ALL(v));
  sort(ALL(w));
  set<ll> plist1;
  REP(i,2){
    ll xp1 = v[i][1], xp2 = v[n - 1 - i][1];
    ll yp1 = w[i][1], yp2 = w[n - 1 - i][1];
    plist1.insert(xp1);
    plist1.insert(xp2);
    plist1.insert(yp1);
    plist1.insert(yp2);
  }
  vector<ll> plist2;
  for(auto p: plist1)plist2.push_back(p);
  vector<ll> dist;
  REP(i, plist2.size() - 1){
    ll p1 = plist2[i];
    FOR(j, i + 1, plist2.size()){
      ll p2 = plist2[j];
      ll d1 = abs(x[p1] - x[p2]);
      ll d2 = abs(y[p1] - y[p2]);
      dist.push_back(max(d1, d2));
    }
  }
  sort(ALL(dist));
  cout << dist[dist.size() - 2] << endl;
  return 0;
}
