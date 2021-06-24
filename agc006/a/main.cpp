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
  string s,t;
  cin>>n>>s>>t;
  if(s==t){
    cout<<n<<endl;
    return 0;
  }
  ll length=0;
  FOR(i,1,n){
    string a,b;
    a=s.substr(n-i,i), b=t.substr(0,i);
    if(a==b)length=i;
  }
  cout<<2*n-length<<endl;
  return 0;
}

