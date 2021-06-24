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
    string s,t;
    cin>>s>>t;
    ll a=s.size(), b=t.size();
    ll m=0;
    REP(i,a-b+1){
        ll cnt=0;
        REP(j,b){
            if(s[i+j]==t[j]){
                cnt++;
            }
        }
        if(cnt>m){
            m=cnt;
        }
    }
    cout<<b-m<<endl;
    return 0;
}
