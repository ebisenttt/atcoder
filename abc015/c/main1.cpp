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
    ll n,k; cin>>n>>k;
    //ll n=5,k=5;
    vector<vector<ll>> v(n,vector<ll> (k));
    REP(i,n)REP(j,k)cin>>v[i][j];
    //REP(i,n)REP(j,k)v[i][j]=127;
    vector<vector<ll>> w;
    queue<vector<ll>> q;
    q.push({});
    while(!q.empty()){
        vector<ll> x=q.front();
        ll s=SIZE(x);
        if(s<n){
            REP(j,k){
                vector<ll> y=x;
                y.push_back(v[s][j]);
                q.push(y);
            }
            q.pop();
        }else{
            w.push_back(x);
            q.pop();
        }
    }
    string ans="Nothing";
    REP(i,SIZE(w)){
        ll a=0;
        REP(j,n){
            a^=w[i][j];
        }
        if(!a){ans="Found";break;}
    }
    cout<<ans<<endl;
    return 0;
}