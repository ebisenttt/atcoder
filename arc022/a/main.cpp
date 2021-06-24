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
  REP(i,s.size()){
    if(s[i]=='i'||s[i]=='I'){
      FOR(j,i,s.size()){
        if(s[j]=='c'||s[j]=='C'){
          FOR(k,j,s.size()){
            if(s[k]=='t'||s[k]=='T'){
              cout<<"YES"<<endl;
              return 0;
            }
          }
        }
      }
    }
  }
  cout<< "NO" <<endl;
  return 0;
}
