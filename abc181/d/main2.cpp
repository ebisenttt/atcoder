#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;

int main(){
  string s;
  cin>>s;
  vector<string> v;
  rep(i,125){
    if(i<13)continue;
    v.push_back(to_string(i*8));
  }
  string ans="No";
  if(s.size()==1){
    if(s=="8")ans="Yes";
  }else if(s.size()==2){
    if(stoi(s)%8==0)ans="Yes";
    if(stoi(s.substr(1)+s.substr(0,1))%8==0)ans="Yes";
  }else{
    rep(i,v.size()){
      vector<int> w(10);
      rep(j,3){
        w[v[i][j]-48]--;
      }
      rep(j,s.size()){
        w[s[j]-48]++;
      }
      bool is =true;
      rep(j,3){
        if(w[v[i][j]-48]<0)is=false;
      }
      if(is)ans="Yes";
    }
  }
  cout<<ans<<endl;
  return 0;  
}