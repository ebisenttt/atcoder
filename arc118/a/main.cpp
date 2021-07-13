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
  ll t, n;
  cin >> t >> n;
  vector<ll> v;
  ll pre = 1;
  FOR(a, 1, 101){
    ll post = (100 + t) * a / 100;
    if(pre != post)v.push_back(pre);
    pre = post + 1;
  }
  ll q = (n - 1) / v.size();
  ll r = (n - 1) % v.size();
  cout << v[r] + (100 + t) * q << endl;
  return 0;
}
