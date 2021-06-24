#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
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
    ll h,w,k;cin>>h>>w>>k;
    vector<ll> l(h),c(w);
    vector<vector<ll>> v(h,vector<ll>(w));
    REP(i,h){
        REP(j,w){
            char a; cin>>a;
            if(a=='#'){
                l[i]++;
                c[j]++;
                v[i][j]++;
            }
        }
    }
    ll sum=0,count=0;
    REP(i,h){
        REP(j,w){
            sum=l[i]+c[j]-v[i][j];
            if(sum==k){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
