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
    int t,n,a;
    string s;
    cin>>t;
    REP(i,t){
        cin>>n;
        vector<int> list(n);
        REP(i,n){
            cin>>list[i]
        }
        cin>>s;
        //ここに処理を書く
        

    }

    return 0;
}
