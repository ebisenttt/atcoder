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
  ll l;
  cin>>l;
  ll ans=1;
  queue<ll> q;
  REP(i,12){
    q.push(i+1);
  }
  FOR(i,l-11,l){
    ans*=i;
    if(ans%q.front()==0){
      ans/=q.front();
      q.pop();
    }
  }
  cout<< ans <<endl;
  return 0;
}

