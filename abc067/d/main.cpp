#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <map>
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
    ll n; cin>>n;
    ll INF=1e16;
    vector<vector<ll>> v(n+1, vector<ll> (n+1,INF));
    REP(i,n){
        ll a,b; cin>>a>>b;
        v[a][b]=1;
        v[b][a]=1;
    }
    REP(k,n)REP(i,n)REP(j,n){
        v[i][j]=min(v[i][j], v[i][k]+v[k][j]);
    }
    vector<ll> g(n+1);
    FOR(i,1,n+1){
        if(v[1][i]>v[n][i]){
            g[i]=1;
        }
    }
    ll sum=0;
    REP(i,n+1){
        sum+=g[i];
    }
    if(sum<n/2){
        cout<<"Fennec"<<endl;
    }else{
        cout<<"Snuke"<<endl;
    }
    return 0;
}
