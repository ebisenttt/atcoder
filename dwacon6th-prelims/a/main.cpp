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
  vector<string> v(n);
  vector<ll> w(n);
  ll all=0;
  REP(i,n){
    cin>>v[i];
    cin>>w[i];
    all+=w[i];
  }
  string x;
  cin>>x;
  ll sum=0;
  REP(i,n){
    sum+=w[i];
    if(x==v[i])break;
  }
  cout<<all-sum<<endl;
  return 0;
}
