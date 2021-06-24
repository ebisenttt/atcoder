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
  int n;
  cin>>n;
  vector<vector<int>> v(n,vector<int> (2));
  int r=-1;
  int cnt=0;
  REP(i,n){
    cin>>v[i][0]>>v[i][1];
  }
  sort(ALL(v));
  REP(i,n){
    int x=v[i][0],d=v[i][1];
    int l=max(0,x-d+1);
    if(l<r)continue;
    else{
      r=min(100000-1,x+d-1);
      cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
