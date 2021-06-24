#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <map>
#include <fstream>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
#define INF 1e9 
typedef long long ll;
typedef long double ld;
int main(){
    ll n;
    cin>>n;
    ll d=1e9+7;
    ll a=1,b=1,c=1;
    REP(i,n){
        a*=10;
        a=a%d;
        b*=9;
        b=b%d;
        c*=8;
        c=c%d;
    }
    ll ans=(a-b*2+c)%d;
    cout<<((ans>=0)?ans:ans+d)<<endl;
    return 0;
}
