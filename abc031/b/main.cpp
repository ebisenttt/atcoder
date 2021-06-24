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
  ll l,r,n;
  cin>>l>>r>>n;
  REP(i,n){
    ll a;
    cin>>a;
    if(l<=a&&a<=r)cout<<0<<endl;
    else if(a<l)cout<< l-a <<endl;
    else cout<< -1 <<endl;
  }

  return 0;
}
