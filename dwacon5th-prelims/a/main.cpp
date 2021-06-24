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
  ll n;
  cin>>n;
  vector<ll> v(n);
  ld sum=0;
  REP(i,n){
    cin>>v[i];
    sum+=(ld)v[i];
  }
  sum/=(ld)n;
  ld m=INF;
  ll itr;
  for(int i=n-1; i>-1; i--){
    if(m>=abs(v[i]-sum)){
      m=abs(v[i]-sum);
      itr=i;
    }
  }
  cout<<itr<<endl;
  return 0;
}
