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
    int r,c,k; cin>>r>>c>>k;
    vector<vector<char>> v(r,vector<char>(c));
    REP(i,r)REP(j,c)cin>>v[i][j];
    int ucnt=0,dcnt=0;
    vector<vector<int>> w(r,vector<int>(c));
    REP(i,r)REP(j,c){
        for(int x=0;i-x>=0;x++){
            if(v[i-x][c]=='o')w[i][j]++;
            else break;
        }
        for(int y=0;i+y<=r;y++){
            if(v[i+y][c]=='o')w[i][j]++;
            else break;
        }
    }
    int cnt=0;
    bool is=false;
    REP(i,r)REP(j,c){
        FOR(p,-k+1,k-1){
            if(w[i][j+p]>=k-abs(p))is=true;
            else is=false;
        }
        if(is)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
