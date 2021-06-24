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
  ld x,y,r;
  cin>>x>>y>>r;
  r = nextafter(r,INF);
  ll from = ceil(x-r), to = floor(x+r);
  ll cnt=0;
  for(int num=from; num<=to; num++){
    ld p = sqrtl(r*r-(x-num)*(x-num));
    cnt += floor(y+p) - ceil(y-p) + 1;
  }
  cout<<cnt<<endl;
  return 0;
}

