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
    int n,m;
    cin >> n >> m;
    vector<int> ac_list(n, 0),wa_list(n,0);
    int num, ac_count=0, wa_count=0;
    string result;
    REP(i, m){
        cin >> num >> result;
        if(result == "WA"){
            wa_list[num]++;
        } else {
            if(ac_list[num]==0){
                ac_list[num]++;
                ac_count++;
                wa_count += wa_list[num];
            }
        }
    }
    cout << ac_count << " " << wa_count;
    return 0;
}
