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
  ll x;
  cin>>x;
  FOR(a,-118,120){
    FOR(b,-119,119){
      ll num=pow(a,5)-pow(b,5);
      if(num==x){
        cout<< a << " " << b <<endl;
        return 0;
      }
    }
  }
  return 0;
}
