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
  vector<ll> v(26);
  ll l=s.size();
  REP(i,l){
    ll num=s[i]-'a';
    v[num]++;
  }
  if(l!=26){
    REP(i,26){
      if(v[i]==0){
        char c=i+'a';
        cout<< s+c <<endl;
        return 0;
      }
    }
  }else{
    string left;
    ll itr=0;
    for(int i=25; i>0; i--){
      if(s[i-1]>s[i])continue;
      else{
        itr=i;
        break;
      }
    }
    if(itr==0){
      cout<< -1 <<endl;
      return 0;
    }
    string t=s.substr(0,itr-1);
    char c=s[itr-1];
    string u=s.substr(itr);
    sort(ALL(u));
    char d;
    REP(i,u.size()){
      if(c<u[i]){
        d=u[i];
        break;
      }
    }
    cout<< t+d <<endl;
  }
  return 0;
}
