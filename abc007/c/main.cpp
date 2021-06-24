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

int main(){
    ll l,c; cin>>l>>c;
    ll s_l,s_c,g_l,g_c; cin>>s_l>>s_c>>g_l>>g_c;
    s_l--, s_c--, g_l--, g_c--;
    vector<vector<char>> maze(l, vector<char>(c));
    vector<vector<ll>> cost(l, vector<ll>(c,-1));
    REP(i,l)REP(j,c)cin>>maze[i][j];
    vector<ll> vx={0,1,0,-1}, vy={1,0,-1,0};
    queue<pair<ll,ll>> q;
    q.push(make_pair(s_l,s_c));
    cost[s_l][s_c]=0;
    while(!q.empty()){
        ll y=q.front().first, x=q.front().second;
        REP(i,4){
            ll nx=x+vx[i], ny=y+vy[i];
            if(maze[ny][nx]=='.' && cost[ny][nx]==-1){
                cost[ny][nx]=cost[y][x]+1;
                q.push(make_pair(ny,nx));
            }
        }
        q.pop();
    }
    cout<<cost[g_l][g_c]<<endl;
    return 0;
}
