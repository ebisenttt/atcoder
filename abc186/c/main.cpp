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
  ll cnt=0;
  FOR(i,1,n+1){
    string a=to_string(i);
    stringstream ss;
    ss<<oct<<i;
    string b=ss.str();
    if(a.find("7")==string::npos&&b.find("7")==string::npos)cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}
