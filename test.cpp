#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string sum_strings(string a, string b) {
  int len = max(a.size(), b.size());
  vector<char> v(len+1), w(len+1);
  vector<int> x(len+1);
  for(int i = 0; i < a.size(); i++){
    if(i == 0)continue;
    else{
      v[i] = a[i];
      w[i] = b[i];
    }
  }
  for(int i = len; i > 0; i--){
    int num1 = v[i] - '0';
    int num2 = w[i] - '0';
    int sum = num1 + num2 + x[i];
    if(sum < 10)x[i] = sum;
    else{
      x[i] = sum % 10;
      x[i-1] = 1;
    }
  }
  string ans = "";
  for(int i = 0; i < len + 1; i++){
    if(i == 0 && x[i] == 0)continue;
    else{
      ans += to_string(x[i]);
    }
  }
  return ans;
}
