#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <string>
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
    string a,b,c;
    cin>>a>>b;
    c=a+b;
    int d=stoi(c);
    string ans="No";
    REP(i,sqrt(d)+1){
        if(i*i==d){
            ans="Yes";
        }
    }
    cout<<ans<<endl;
    return 0;
}
