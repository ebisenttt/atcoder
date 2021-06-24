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
  int n;
  cin>>n;
  map<int,int> mp;
  REP(i,n){
    int num;
    cin>>num;
    if(mp.count(num)>0)mp.at(num)++;
    else mp.insert(make_pair(num,1));
  }
  int ans = n * (n - 1) / 2;
  for(auto p: mp){
    ans -= p.second * (p.second - 1) / 2;
  }
  cout<<ans<<endl;
  return 0;
}
