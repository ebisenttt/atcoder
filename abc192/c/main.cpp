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

int vcheck(vector<int> v);

int main(){
  string n;
  ll k;
  cin >> n >> k;
  int len = n.size();
  vector<int> num(len);
  REP(i,len){
    num[len - i - 1] = n[i] - '0';
  }
  while(k > 0){
    sort(ALL(num));
    vector<int> g1 = num;
    //
    // cout<<"g1: ";
    // vcheck(g1);
    sort(ALL(num), greater());
    vector<int> g2 = num;
    //
    // cout<<"g2: ";
    // vcheck(g2);
    vector<int> ans(num.size());
    REP(i,g1.size()){
      ans[i] += g1[i] - g2[i];
      if(ans[i] < 0){
        ans[i+1]--;
        ans[i] += 10;
      }
    }
    //
    // cout<<"ans: ";
    // vcheck(ans);
    num = ans;
    while(num.back() == 0 && num.size() > 1)num.pop_back();
    k--;
  }
  for(int i = num.size() - 1; i >= 0; i--){
    cout<<num[i];
  }
  cout<<endl;
  return 0;
}

int vcheck(vector<int> v){
  for(int i = v.size() - 1; i >= 0; i--){
    cout<<v[i];
  }
  cout<<endl;
  return 0;
}