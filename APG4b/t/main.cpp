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
typedef long double ld;
int main(){
    ll n,m;cin>>n>>m;
    vector<vector<string>> v(n,vector<string>(n,"-"));
    REP(i,m){
        ll win,lose;
        cin>>win>>lose;
        v[win-1][lose-1]="o";
        v[lose-1][win-1]="x";
    }
    REP(i,n){
        REP(j,n){
            if(j==n-1){
                cout<<v[i][j]<<endl;
            }else{
                cout<<v[i][j]<<" ";
            }
        }
    }
    return 0;
}
