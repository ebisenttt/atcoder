#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
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
    string s;
    cin>>s;
    char a;
    bool is=false;
    REP(i,SIZE(s)){
        a=s[i];
        if(a=='9')is=true;
    }
    string ans;
    if(is){
        ans="Yes";
    }else{
        ans="No";
    }
    cout<<ans<<endl;
    return 0;
}
