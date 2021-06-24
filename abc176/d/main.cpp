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
#define INF 1e10
typedef long long ll;
typedef long double ld;
int main(){
    ll h,w,sh,sw,gh,gw; cin>>h>>w>>sh>>sw>>gh>>gw;
    vector<vector<char>> maze(h+4,vector<char>(w+4,'#'));
    vector<vector<ll>> dist(h,vector<ll>(w,-1));
    FOR(i,2,h+2)FOR(j,2,w+2)cin>>maze[i][j];
    priority_queue<pair<ll,ll>> que;
    vector<ll> moveh={-1,0,1,-2,2}, movew={-1,0,1,-2,2};
    que.push(make_pair(sh,sw));
    dist[sh][sw]=0;
    while(!que.empty()){
        pair<ll,ll> p=que.front();
        ll f=p.first, s=p.second;
        que.pop();
        REP(i,5)REP(j,5){
            ll ver=moveh[i], hor=movew[j];
            if(maze[f+ver+2][s+hor+2]=='.'){
                ll predis=dist[f][s];
                if(i>2||j>2)predis++;
                if(dist[f+ver][s+hor]<predis)dist[f+ver][s+hor]=predis;
                que.push(make_pair(f+ver,s+hor));
            }
        }
    }
    cout<<dist[gh][gw]<<endl;
    return 0;
}
