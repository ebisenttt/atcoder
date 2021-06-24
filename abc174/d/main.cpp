#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
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
    vector<char> c(n);
    REP(i,n)cin>>c[i];
    ll cnt_r=0, cnt_w=0;
    REP(i,n){
        if(c[i]=='R')cnt_r++;
        if(c[i]=='W')cnt_w++;
    }
    ll m=min(cnt_r, cnt_w);
    ll M=max(cnt_r, cnt_w);
    if(cnt_r>cnt_w){
        char co
    }
    RPE(i,M){
        if(c[i]=='')
    }
    return 0;
}
