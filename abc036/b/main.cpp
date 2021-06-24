#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <map>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
#define INF 1e10
typedef long long ll;
typedef long double ld;
int main(){
    ll n;
    cin>>n;
    vector<vector<char>> v(n,vector<char> (n));
    REP(i,n)REP(j,n)cin>>v[i][j];
    vector<vector<char>> w(n,vector<char> (n));
    REP(i,n)REP(j,n)w[j][n-1-i]=v[i][j];
    REP(i,n)REP(j,n){
        cout<<w[i][j];
        if(j==n-1)cout<<endl;
    }
    return 0;
}
