#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <map>
#include <stack>
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
    ll h,w;
    cin>>h>>w;
    vector<vector<char>> v(h+2, vector<char>(w+2));
    vector<vector<ll>> done(h+2, vector<ll> (w+2));
    stack<pair<ll,ll>> todo;
    ll sl, sc, gl, gc;
    REP(i,h+2)REP(j,w+2){
        if(i*j==0||i==h+1||j==w+1)v[i][j]='#';
        else {cin>>v[i][j];}
        if(v[i][j]=='s')sl=i, sc=j;
        else if(v[i][j]=='g')gl=i, gc=j;
    }
    vector<ll> movel={1,-1,0,0}, movec={0,0,1,-1};
    done[sl][sc]=1;
    todo.push(make_pair(sl,sc));
    while(!todo.empty()){
        pair<ll,ll> now=todo.top();
        todo.pop();
        REP(i,4){
            ll l=now.first+movel[i], c=now.second+movec[i];
            if(v[l][c]=='.'&&done[l][c]==0){
                done[l][c]=1;
                todo.push(make_pair(l,c));
            }else if(v[l][c]=='g'){
                done[l][c]=1;
                break;
            }
        }
    }
    cout<<((done[gl][gc]==1)?"Yes":"No")<<endl;
    return 0;
}
