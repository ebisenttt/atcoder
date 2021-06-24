#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;
#define REP(i, n) for(int i = 0; i <= n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;
typedef long double ld;
int main(){
    ll n,m; cin>>n>>m;
    ll x,y,z;
    bool is=false;
    REP(i,n){
        z=i;
        REP(j,n-i){
            y=m-2*n-2*z;
            x=n-y-z;
            if(y>=0 && x>=0){
                is=true;
                break;
            }
        }
        if(is)break;
    }
    if(is){
        cout<<x<<" "<<y<<" "<<z<<endl;
    }else{
        cout<<"-1 -1 -1"<<endl;
    }
    return 0;
}
