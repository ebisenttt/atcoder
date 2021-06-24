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
  if(s.size()==1){
    cout<< s <<endl;
  }else if(s[s.size()-1]!='9'){
    cout<< (s.size()-1)*9+s[0]-49 <<endl;
  }else{
    cout<< (s.size()-1)*9+s[0]-48 <<endl;
  }
  
  return 0;
}
