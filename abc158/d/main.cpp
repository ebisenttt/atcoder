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
  ll q;
  cin>>s>>q;
  ll cnt=0;
  ll t;
  REP(i,q){
    cin>>t;
    if(t==1){
      cnt++;
    }else{
      ll f;
      string c;
      cin>>f>>c;
      if(cnt%2==0&&f==1){
        s=c+s;
      }else if(cnt%2==0&&f==2){
        s+=c;
      }else if(cnt%2==1&&f==1){
        s+=c;
      }else{
        s=c+s;
      }
    }
  }
  if(cnt%2==1)reverse(ALL(s));
  cout<<s<<endl;
  return 0;
}
