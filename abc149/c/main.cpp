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
    ll x;
    cin >> x;
    bool prime = true;
    FOR(i, x, pow(10, 5)+4){
        FOR(j, 2, i){
            if(j*2 > i){
                break;
            }else{
                if(i%j==0){
                    prime = false;
                    break;
                }else{
                    prime = true;
                }
            }
        }
        if(prime){
            cout << i;
            break;
        }
    }
    return 0;
}
