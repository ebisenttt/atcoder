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
  int n;
  string t;
  cin>>n>>t;
  string str="";
  ll num=10000000000;
  REP(i,1000000){
    str+="110";
  }
  ll ans=0;
  if(str.find(t)!=string::npos){
    if(t=="1"){
      ans=2*num;
    }else if(t=="11"){
      ans=num;
    }else{
      ll k=0;
      REP(i,t.size()){
        if(t[i]=='0')k++;
      }
      if(t[t.size()-1]=='0'){
        ans=num-k+1;
      }else{
        ans=num-k;
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
