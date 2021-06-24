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
    int x,n;
    cin>>x>>n;
    vector<int> v(102);
    int a;
    REP(i,102){
        cin>>a;
        v[a]++;
    }
    int min=1000,ans=1000;
    REP(i,102){
        if(v[i]){
            continue;
        }
        if(min>abs(i-x)){
            min=abs(i-x);
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}
