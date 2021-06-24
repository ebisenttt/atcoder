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
    ll d,m; cin>>d>>m;
    d*=10;
    ll arg=1125;
    ll cnt1=0;
    while(arg<d){
        arg+=2250;
        cnt1++;
    }
    vector<string> v={"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW","N"};
    string dir=v[cnt1];
    vector<ll> w={2,15,33,54,79,107,138,171,207,244,284,326,2000};
    ll cnt2=0;
    ll speed=round(10*m/60.0);
    REP(i,13){
        if(speed<=w[i]){
            cnt2=i;
            break;
        }
    }
    if(cnt2==0)dir="C";
    cout<<dir<<" "<<cnt2<<endl;
    return 0;
}
