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
    ll n; cin>>n;
    vector<pair<ld,ld>> v;
    REP(i,n){
        ld x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    ld ans=0;
    REP(i,n)REP(j,n){
        ld x1=v[i].first, y1=v[i].second;
        ld x2=v[j].first, y2=v[j].second;
        ld dx=x1-x2, dy=y1-y2;
        ld d=sqrt(dx*dx+dy*dy);
        if(d>ans)ans=d;
    }
    cout<<fixed<<setprecision(4)<<ans<<endl;
    return 0;
}
