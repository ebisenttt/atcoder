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
    ll m;cin>>m;
    ll ans;
    if(m<100){
        ans=0;
    }else if(m<=5000){
        ans=m/100;
    }else if(m<=30000){
        ans=50+m/1000;
    }else if(m<=70000){
        ans=80+(-30+m/1000)/5;
    }else{
        ans=89;
    }
    printf("%02lld\n", ans);
    return 0;
}
