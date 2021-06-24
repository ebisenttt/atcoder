#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <map>
#include <fstream>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
#define INF 1e9 
typedef long long ll;
typedef long double ld;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    REP(i,n){
        int a;
        cin>>a;
        v[i]=a;
    }
    int m=MAX(v);
    int ans, cnt_m=0;
    for(int i=2;i<m+1;i++){
        int cnt=0;
        REP(j,n){
            if(v[j]%i==0){
                cnt++;
            }
        }
        if(cnt_m<cnt){
            cnt_m=cnt;
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
