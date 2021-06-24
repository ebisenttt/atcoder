#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;
#define REP(i, n) for(int i = 0; i <= n; i++)
#define FOR(i, m, n) for(int i = m; i <= n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;
typedef long double ld;
#define max(x,y) max((ll)x, (ll)y)
int main(){
    ll n,h,a,b,c,d,e; cin>>n>>h>>a>>b>>c>>d>>e;
    ll cost=0, ans=1e18;
    REP(x,n){
        ll y=floor(1.0+(ld)(e*n-h-b*x-e*x)/(ld)(d+e));
        y=max(y,0);
        cost=a*x+c*y;
        ans=min(ans,cost);
    }
    cout<<ans<<endl;
    return 0;
}
