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
  ll n;
  cin>>n;
  if(n==1){
    cout<<"Not Prime"<<endl;
    return 0;
  }
  vector<ll> v={2};
  FOR(i,2,sqrt(n)+1){
    bool is=true;
    REP(j,SIZE(v)){
      if(n%v[j]==0){
        is=false;
        break;
      }
    }
    if(is)v.push_back(i);
  }
  bool isprime=true;
  REP(i,SIZE(v)){
    if(n==v[i]){
      isprime=true;
      break;
    }else if(n%v[i]==0){
      isprime=false;
      break;
    }
  }
  string ans;
  if(isprime){
    ans="Prime";
  }else{
    ll r=n%10;
    if(r%2==0||r==5){
      ans="Not Prime";
    }else{
      ll sum=0;
      string str=to_string(n);
      REP(i,SIZE(str)){
        sum+=str[i]-48;
      }
      if(sum%3==0){
        ans="Not Prime";
      }else{
        ans="Prime";
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
