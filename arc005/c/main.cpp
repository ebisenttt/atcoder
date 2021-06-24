#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <map>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
#define INF 1e9
typedef long long ll;
typedef long double ld;
int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<char>> maze(h+2,vector<char>(w+2));
    vector<vector<int>> dist(h+2,vector<int> (w+2, INF));
    vector<int> movel={1,-1,0,0}, movec={0,0,1,-1};
    queue<pair<int,int>> q;
    int sl,sc,gl,gc;
    FOR(i,1,h+1)FOR(j,1,w+1){
        cin>>maze[i][j];
        if(maze[i][j]=='s'){sl=i,sc=j;}
        else if(maze[i][j]=='g'){gl=i,gc=j;}
    }
    dist[sl][sc]=0;
    q.push(make_pair(sl,sc));
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        int l=p.first, c=p.second;
        REP(i,4){
            int nl=l+movel[i], nc=c+movec[i];
            int d=INF;
            if(maze[nl][nc]=='.'||maze[nl][nc]=='g'){
                d=dist[l][c];
            }else if(maze[nl][nc]=='#'){
                d=dist[l][c]+1;
            }
            if(dist[nl][nc]>d){
                dist[nl][nc]=d;
                q.push(make_pair(nl,nc));
            }
        }
    }
    string ans;
    ans=(dist[gl][gc]<=2)?"YES":"NO";
    cout<<ans<<endl;
    return 0;
}
