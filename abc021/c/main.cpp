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
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pi;
#define INF 1e3
int main(){
    ll n,a,b,m;cin>>n>>a>>b>>m;
    vector<vector<ll>> road(n+1);
    vector<ll> dist(n+1,INF),cnt(n+1);
    priority_queue<pi,vector<pi>,greater<pi>> que;
    REP(i,m){
        ll x,y;cin>>x>>y;
        road[x].push_back(y);
        road[y].push_back(x);
    }
    dist[a]=0;
    cnt[a]=1;
    que.push(make_pair(0,a));
    while(!que.empty()){
        pi p=que.top();
        que.pop();
        ll d=p.first, from=p.second;
        if(dist[from]<d){
            continue;
        }
        REP(i,SIZE(road[from])){
            if(dist[from]+1<dist[road[from][i]]){
                dist[road[from][i]]=dist[from]+1;
                que.push(make_pair(dist[road[from][i]],road[from][i]));
                cnt[road[from][i]]=cnt[from];
            }else if(dist[from]+1==dist[road[from][i]]){
                cnt[road[from][i]]+=cnt[from];
                cnt[road[from][i]]=cnt[road[from][i]]%1000000007;
            }
        }
    }
    cout<<cnt[b]<<endl;
    return 0;
}
