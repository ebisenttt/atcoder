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
    string s, t, u, v, w;
    int n, count;
    cin >> n >> s;
    REP(i, n-2){
        t = s[i];
        u = s[i+1];
        v = s[i+2];
        w = t+u+v;
        if(w=="ABC"){
            count++;
        }
    }
    cout << count; 
    return 0;
}
