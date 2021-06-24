#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define REP(i, n) for(int i = 0; i <= n; i++)
#define FOR(i, m, n) for(int i = m; i > n; i--)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;

int main(){
    ll a,b,money;
    cin>>a>>b>>money;
    ll n_left=1;
    ll n_right=pow(10,9);
    ll n_mid;
    ll ans;
    ll c_left,c_right,c_mid;
    if(a*n_right+b*to_string(n_right).length()<=money){
        ans=n_right;
    }else if(money<a+b){
        ans=0;
    }else{
        REP(i,30){
            n_mid=(n_left+n_right)/2;
            c_left=a*n_left+b*to_string(n_left).length();
            c_right=a*n_right+b*to_string(n_right).length();
            c_mid=a*n_mid+b*to_string(n_mid).length();
            if(c_left<=money && money<=c_mid){
                n_right=n_mid;
            }else{
                n_left=n_mid;
            }
        }
        if(c_right<=money){
            ans=n_right;
        }else{
            ans=n_left;
        }
    }
    cout <<ans;
    return 0;
}
