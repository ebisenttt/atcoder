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

bool dfs(ll numq, ll value, ll n, ll k, vector<vector<ll>> v){
    if(numq==n)return(value==0);
    REP(i,k){
        if(dfs(numq+1,value^v[numq][i],n,k,v))return true;
    }
    return false;
}

int main(){
    ll n,k; cin>>n>>k;
    vector<vector<ll>> v(n,vector<ll> (k));
    REP(i,n)REP(j,k)cin>>v[i][j];
    ll numq=0, value=0;
    bool is=dfs(numq, value, n, k, v);
    string ans;
    if(is)ans="Found";
    else ans="Nothing";
    cout<<ans<<endl;
    return 0;
}