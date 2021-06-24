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
  cin>>s;
  ll n=s.size();
  REP(i,n/2){
    if(s[i]!=s[n-1-i]){
      cout<<"No"<<endl;
      return 0;
    }
  }
  REP(i,(n-1)/4){
    if(s[i]!=s[(n-1)/2-i-1]||s[i+n/2+1]!=s[n-1-i]){
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;
  return 0;
}

