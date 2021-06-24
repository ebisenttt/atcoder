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
    int n;
    cin>>n;
    vector<int> v(n);
    REP(i,n)cin>>v[i];
    ll ans=INF;
    REP(bit, 1<<n){
        int a=0, b=0;
        REP(i,n){
            int time=v[i];
            (bit & (1<<i))?a+=time:b+=time;
        }
        int sum=max(a,b);
        if(sum<ans)ans=sum;
    }
    cout<<ans<<endl;
    return 0;
}
