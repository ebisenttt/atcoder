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
  string s;
  cin>>s;
  ll n = SIZE(s);
  ll sum=0;
  vector<ll> v(n+1);
  REP(i,n){
    v[i]=sum;
    if(s[i]=='<'){
      sum++;
    }else{
      sum=0;
    }
  }
  v[n]=sum;
  sum=0;
  for(int i=n-1;i>=0;i--){
    if(s[i]=='>'){
      v[i+1]=sum;
      sum++;
    }else{
      v[i+1]=max(sum,v[i+1]);
      sum=0;
    }
  }
  v[0]=max(v[0],sum);
  ll ans=0;
  REP(i,n+1){
    ans+=v[i];
  }
  cout<<ans<<endl;
  return 0;
}
