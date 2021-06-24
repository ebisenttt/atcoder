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
  ll n,a,b;
  cin>>n>>a>>b;
  string s;
  cin>>s;
  ll x=0, y=0;
  REP(i,n){
    bool is=false;
    if(s[i]=='a'&&x<a+b){
      is=true;
      x++;
    }else if(s[i]=='b'&&x<a+b&&y<b){
      is=true;
      x++;
      y++;
    }
    string ans=is?"Yes":"No";
    //cout<< ans <<" "<<x<<" "<<y<<endl;
    cout<< ans <<endl;
  }
  return 0;
}
