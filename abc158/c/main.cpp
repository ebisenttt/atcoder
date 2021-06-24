#include <bits/stdc++.h>
using namespace std;

int main(){
  double a, b;
  cin >> b >> a;
  int ans;
  if(a*100/10<(b+1)*100/8 && b*100/8<(a+1)*100/10){
    ans = ceil(max(a*100/10,b*100/8));
  }else{
    ans = -1;
  }
  cout << ans;
}