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

int main(){
    ll n,k;
    cin >> n >> k;
    vector<ll> h(n);
    if(n<=k){
        cout << 0;
    }else{
        REP(i,n){
            cin >> h.at(i);
        }
        sort(ALL(h));
        ll sum=0;
        REP(i,n-k){
            sum += h.at(i);
        }
        cout << sum;
    }
    
    return 0;
}
