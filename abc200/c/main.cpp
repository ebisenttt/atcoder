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
  map<ll, ll> mp;
  REP(i,n){
    ll num;
    cin >> num;
    num %= 200;
    if(mp.count(num) > 0)mp.at(num)++;
    else mp.insert(make_pair(num, 1));
  }
  ll cnt = 0;
  for(auto p: mp){
    cnt += p.second * (p.second - 1) / 2;
  }
  cout << cnt << endl;
  return 0;
}
