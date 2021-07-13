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
  ll a,b,w;
  cin >> a >> b >> w;
  w *= 1000;
  vector<ll> v;
  FOR(i, w/b, w/a + 1){
    if(a * i <= w && w <= b * i)v.push_back(i);
  }
  if(v.size() == 0)cout<<"UNSATISFIABLE"<<endl;
  else cout << v[0] << " " << v[v.size() - 1] << endl;
  return 0;
}
