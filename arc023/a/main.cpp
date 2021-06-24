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
    int y,m,d;
    cin>>y>>m>>d;
    if(m==1 || m==2){
        y--;
        m+=12;
    }
    ll ans=(365*y)+(y/4)-(y/100)+(y/400)+(306*(m+1)/10)+d-429;
    ans=735369-ans;
    cout<<ans<<endl;
    return 0;
}
