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
  ll l=s.length();
  reverse(ALL(s));
  ll odd=0, even=0;
  REP(i,l){
    if((i+1)%2==0)even+=s[i]-48;
    else odd+=s[i]-48;
  }
  cout<<even<<" "<<odd<<endl;
  return 0;
}
