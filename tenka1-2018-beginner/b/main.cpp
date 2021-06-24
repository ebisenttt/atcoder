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
  ll a,b,k;
  cin>>a>>b>>k;
  REP(i,k){
    if(a%2==1)a--;
    b+=a/2;
    a/=2;
    i++;
    if(i>=k)break;
    if(b%2==1)b--;
    a+=b/2;
    b/=2;
  }
  cout<<a<<" "<<b<<endl;
  return 0;
}
