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
  double a,b,c,d;
  cin>>a>>b>>c>>d;
  if(d * c - b == 0){
    cout<<-1<<endl;
    return 0;
  }
  double n = a / (d * c - b);
  if(n < 0)cout<<-1<<endl;
  else cout<<ceil(n)<<endl;
  return 0;
}

