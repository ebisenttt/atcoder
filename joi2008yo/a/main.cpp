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
    int price;
    cin>>price;
    int change=1000-price;
    int cnt=0;
    vector<int> v={500,100,50,10,5,1};
    REP(i,6){
        int coin=v[i];
        int precnt=change/coin;
        cnt+=precnt;
        change-=precnt*coin;
    }
    cout<<cnt<<endl;
    return 0;
}
