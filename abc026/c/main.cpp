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

//全員の給料リストを直属の部下の給料リストを作れば良い。
//Aには直属の部下Bがいるか
    //いる
        //直属の部下全員に対して同じ質問をループ。ループ終了後，Aの給料を確定させる。
    //いない
        //Bの給料は1。Aのリストに給料1を加える。
ll dfs(vector<vector<ll>> vec, int start){
    vector<ll> sarary(SIZE(vec));
    if(SIZE(vec[start])==0)sarary[start]=1;
    else{
        FOR(i,0,SIZE(vec[start])){
            dfs(vec, vec[start][i]);
        }
    }
    return ;
}

int main(){
    ll n; cin>>n;
    vector<vector<ll>> v(n+1);
    FOR(i,2,n+1){
        ll a; cin>>a;
        v[a].push_back(i);
    }
    int cnt=0;
    dfs(v,1);
    return 0;
}
