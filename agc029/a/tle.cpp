#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  string s;
  cin>>s;
  ll cnt=0;
  for(int i=0;i<s.size()-1;i++){
    if(s[i]=='B'&&s[i+1]=='W'){
      s[i]='W';
      s[i+1]='B';
      i=max(i-2,-1);
      cnt++;
    }
  }
  cout<<cnt<<endl;
}