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
    int n; cin>>n;
    string indeed="indeednow";
    sort(ALL(indeed));
    string ans;
    REP(i,n){
        string s; cin>>s;
        sort(ALL(s));
        if(s==indeed){
            ans="YES";
        }else{
            ans="NO";
        }
        cout<<ans<<endl;
    }
    return 0;
}
