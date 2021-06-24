#include <vector>
#include <iostream>
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
    int n, min;
    int count=1;
    cin >>n;
    vector<int> list(n);
    cin >> min;
    list[0] = min;
    FOR(i,1,n){
        cin >> list[i];
        if(min >= list[i]){
            count++;
            min = list[i];
        }
    }
    cout << count;
    return 0;
}
