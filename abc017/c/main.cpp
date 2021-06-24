#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
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
    ll n,m;cin>>n>>m;
    vector<vector<ll>> v(n,vector<ll> (3));
    REP(i,n)REP(j,3)cin>>v[i][j];
    sort(ALL(v));
    vector<ll> w(m+2);
    REP(i,n){
        ll l=v[i][0], r=v[i][1], s=v[i][2];
        w[l]+=s, w[r+1]-=s;
    }
    ll sum=0;
    REP(i,m+2)sum+=w[i], w[i]=sum;
    ll all=0;
    REP(i,n)all+=v[i][2];
    sort(ALL(w));
    cout<<all-w[2]<<endl;
    return 0;
}
