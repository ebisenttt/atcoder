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
  int h,w,n;
  cin>>h>>w>>n;
  vector<vector<char>> v(h+2, vector<char> (w+2,'.'));
  FOR(i,1,h+1){
    FOR(j,1,w+1){
      cin>>v[i][j];
    }
  }
  REP(i,n){
    int a,b,A,B;
    cin>>a>>b>>A>>B;
    a--,b--,A--,B--;
    if(v[a][b]!=v[A][B]){
      cout<<"no"<<endl;
    }else{
      vector<vector<int>> done(h+2,vector<int>w+2);
      queue<pair<int,int>> q;
      q.push(make_pair(a,b);
      vector<int> x={0,1,0,-1}, y={1,0,-1,0};
      while(q.size()){
        pair p=q.front;
        q.pop();
        s=p.front;
        t=p.second;
        REP(j,4){
          s+=x[j], t+=y[j];
          if(s==A&&t==B){
            cout<<"yes"<<endl;
          }else if(v[s][t]=='.'&&!done[s][t]){
            q.push(make_pair(s,t));
            done[s][t]=1;
          }
        }
      }
    }
  }
  return 0;
}