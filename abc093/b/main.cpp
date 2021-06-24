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
  int a,b,k;
  cin>>a>>b>>k;
  set<int> v;
  for(int i=a;i<a+k&&i<=b;i++){
    v.insert(i);
  }
  for(int i=b;i>b-k&&i>=a;i--){
    v.insert(i);
  }
  for(auto a:v){
    cout<<a<<endl;
  })
  return 0;
}
