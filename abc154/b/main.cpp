#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++);
#define FOR(i, m, n) for(int i = m; i < n; i++);
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;

int main(){
    string s;
    cin >> s;
    int length = SIZE(s);
    for(int i =0; i<length; i++){
        cout << "x";
    };
    return 0;
}
