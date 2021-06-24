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
    int cnt=0;
    FOR(i,k-1,r-k+1)FOR(j,k-1,c-k+1){
        bool is=false;
        REP(x,k){
            REP(y,k-x){
                char ul=v[i-x][j-y], ur=v[i-x][j+y];
                char dl=v[i+x][j-y], dr=v[i+x][j+y];
                if(dl+dr+ul+ur==111*4){
                    is=true;
                    continue;
                }else{
                    is=false;
                    break;
                }
            }
            if(!is)break;
        }
        if(is) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
