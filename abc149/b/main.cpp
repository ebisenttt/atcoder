#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;

int main(){
    ll a, b, k;
    cin >> a >>b >> k;
    if(a-k>=0){
        cout << a-k << " " << b;
    } else if(a+b-k>=0){
        cout << 0 << " " << a+b-k;
    } else {
        cout << 0 << " " <<0;
    }
    return 0;
}
