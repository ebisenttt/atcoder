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
    string s,t; cin>>s>>t;
    ll n=SIZE(s);
    bool is=true;
    vector<char> v={'a','t','c','o','d','e','r'};
    REP(i,n){
        char a=s[i], b=t[i];
        if(a!=b){
            if(a=='@' || b=='@'){
                if(find(ALL(v),a)==v.end() && find(ALL(v),b)==v.end()){
                    is=false;
                }
            }else{
                is=false;
            }
        }
    }
    if(is){
        cout<<"You can win"<<endl;
    }else{
        cout<<"You will lose"<<endl;
    }
    return 0;
}
