#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;
typedef long double ld;
int main(){
    vector<vector<char>> v(4,vector<char>(4)), w(4,vector<char> (4));
    REP(i,4)REP(j,4){
        cin>>v[i][j];
    }
    REP(i,4)REP(j,4){
        ll x=abs(i-3), y=abs(j-3);
        w[i][j]=v[x][y];
    }
    REP(i,4)REP(j,4){
        cout<<w[i][j];
        if(j==3){
            cout<<endl;
        }else{
            cout<<" ";
        }
    }
    return 0;
}
