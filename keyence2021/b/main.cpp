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
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  REP(i,n)cin>>v[i];
  sort(ALL(v));
  vector<ll> box(k, -1);
  ll num = 0;
  REP(i,n){
    if(box[num] == v[i] - 1)box[num] = v[i];
    num++;
    if(i != n - 1 && v[i+1] != v[i])num = 0;
  }
  ll cnt = 0;
  REP(i,k)cnt += box[i] + 1;
  cout << cnt << endl;
  return 0;
}
