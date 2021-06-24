#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1e9
typedef long long ll;
typedef long double ld;

int main(){
  ll a,b;
  cin>>a>>b;
  vector<ll> v;
  ll plus = 0, minus = 0;
  REP(i,a){
    v.push_back(i+1);
    plus += i + 1;
  }
  REP(i,b){
    v.push_back(-i-1);
    minus += - i - 1;
  }
  if(a<b)v[0]+=abs(plus + minus);
  else if(a>b)v[a+b-1]-=abs(plus + minus);
  REP(i,a+b){
    cout<<v[i];
    if(i==a+b-1)cout<<endl;
    else cout<<" ";
  }
  return 0;
}
