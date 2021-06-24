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
  ll n;
  cin>>n;
  ll r=0, b=0;
  REP(i,n*n){
    char a;
    cin>>a;
    if(a=='R')r++;
    else if(a=='B')b++;
  }
  if(r>b)cout<<"TAKAHASHI"<<endl;
  else if(r<b)cout<<"AOKI"<<endl;
  else cout<<"DRAW"<<endl;
  return 0;
}
