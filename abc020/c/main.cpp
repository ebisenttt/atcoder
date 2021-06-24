#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
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
    ll h,w,t; cin>>h>>w>>t;
    vector<vector<char>> maze(h,vector<char>(w));
    ll sh,sw,gh,gw;
    REP(i,h)REP(j,w){
        cin>>maze[i][j];
        if(maze[i][j]=='S'){sh=i;sw=j;}
        else if(maze[i][j]=='G'){gh=i;gw=j;}
    }
    vector<vector<ll>> dist(h,vector<ll>(w,INF));
    vector<vector<bool>> visit(h,vector<bool>(w,false));
    vector<ll> mh={0,1,0,-1}, mw={1,0,-1,0};
    queue<pair<ll,ll>> que;
    dist[gh][gw]=0;
    visit[gh][gw]=true;
    que.push(make_pair(gh,gw));
    ll hi=t, lo=1;
    ll min=(lo+hi)/2;
    while(hi-lo!=1){
        while(!que.empty()){
            pair p=que.front();
            ll f=p.first, s=p.second;
            REP(i,4){
                if(!visit[f+mh[i]][s+mw[i]]){
                    visit[f+mh[i]][s+mw[i]]=true;
                    ll predist=dist[f+mh[i]][s+mw[i]];
                    ll newdist;
                    if(maze[f+mh[i]][s+mw[i]]='.'){
                        newdist=dist[f][s]+1;
                    }else{
                        newdist=dist[f][s]+min;
                    }
                }
            }
        }
        if(dist[gh][gw]<=t){
            lo=(min+h)/2;
        }else{
            hi=(min+lo)/2;
        }
    }
    cout<<min<<endl;
    return 0;
}
