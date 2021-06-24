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
    vector<char> v={'o','k','u'};
    bool is=true;
    REP(i,SIZE(s)){
        char a=s[i];
        if(a=='c' && s[i+1]=='h'){
            i++;
            continue;
        }else if(find(ALL(v),a)!=v.end()){
            continue;
        }else{
            is=false;
            break;
        }
    }
    cout<<(is?"YES":"NO")<<endl;
    return 0;
}
