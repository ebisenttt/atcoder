#include <bits/stdc++.h>
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
    vector<ld> v(n);
    REP(i,n)cin>>v[i];
    sort(ALL(v),greater());
    ld sum=0;
    REP(i,n){
        if(i%2==0)sum+=v[i]*v[i]*M_PI;
        else sum-=v[i]*v[i]*M_PI;
    }
    cout<< fixed<<setprecision(9)<< sum <<endl;
    return 0;
}
