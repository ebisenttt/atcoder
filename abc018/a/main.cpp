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
    ll a,b,c;
    vector<vector<ll>> v(3, vector<ll>(2));
    REP(i,3){
        ll d; cin>>d;
        v[i]={d,i};
    }
    sort(ALL(v),greater());
    REP(i,3){
        v[i].push_back(i);
        swap(v[i][0], v[i][1]);
    }
    sort(ALL(v));
    REP(i,3)cout<<v[i][2]+1<<endl;
    return 0;
}
