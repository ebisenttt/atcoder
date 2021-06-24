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
  string s;
  ll k;
  cin>>s>>k;
  s+=s;
  ll a=0, b=0, n=s.length();
  FOR(i,1,n){
    if(s[i-1]==s[i]){
      if(i<n/2)a++;
      else b++;
      s[i]='A';
    }
  }
  cout<<a+b*(k-1)<<endl;
  return 0;
}
