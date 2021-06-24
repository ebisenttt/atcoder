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
  ll n,k;
  string s;
  cin>>n>>s>>k;
  char c=s[k-1];
  REP(i,n){
    if(c!=s[i])s[i]='*';
  }
  cout<<s<<endl;
  return 0;
}
