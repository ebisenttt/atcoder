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
    string s; cin>>s;
    ll n=SIZE(s);
    string ans;
    REP(i,n){
        char c=s[i];
        if(i==0&&97<=c)c-=32;
        else if(i!=0&&c<=90)c+=32;
        ans+=c;
    }
    cout<<ans<<endl;
    return 0;
}
