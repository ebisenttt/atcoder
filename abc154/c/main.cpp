#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> list(n);
    REP(i, n){
        cin >> list.at(i);
    };
    bool a = false;
    sort(ALL(list));
    REP(i, n-1){
        if(list.at(i)==list.at(i+1)){
            a = true;
            goto warp;
        }
    };
    warp:
    if(a){
        cout << "NO";
    }else{
        cout << "YES";
    };
    return 0;
}
