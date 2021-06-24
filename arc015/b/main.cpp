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
int main(){
    ll n;cin>>n;
    double ma,mi;
    vector<int> mav={35,30,25}, cntv(6);
    REP(i,n){
        cin>>ma>>mi;
        REP(j,3)if(ma>=mav[j]){cntv[j]++;break;}
        if(mi>=25)cntv[3]++;
        if(mi<0&&ma>=0)cntv[4]++;
        if(ma<0)cntv[5]++;
    }
    REP(i,6){
        cout<<cntv[i];
        (i<5)?(cout<<" "):(cout<<endl);
    }
    return 0;

    
}
