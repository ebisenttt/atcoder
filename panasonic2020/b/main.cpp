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
  ll h,w;
  cin>>h>>w;
  if(h==1||w==1)cout<<1<<endl;
  else if((h*w)%2==1)cout<<(h*w+1)/2<<endl;
  else cout<< h*w/2 <<endl;
  return 0;
}
