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
  ll n,k,s;
  cin>>n>>k>>s;
  REP(i,k){
    cout<<s<<" ";
  }
  REP(i,n-k){
    if(s==1e9){
      cout<<s-1;
    }else{
      cout<<s+1;
    }
    if(i!=n-k-1){
      cout<<" ";
    }else{
      cout<<endl;
    }
  }
  return 0;
}
