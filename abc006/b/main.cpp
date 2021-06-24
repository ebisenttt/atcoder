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

ll tri(ll n, vector<ll> &memo){
    if(n==1){return 0;}
    else if(n==2){return 0;}
    else if(n==3){return 1;}
    if(memo[n]!=-1){
        return memo[n];
    }else{
        return memo[n]=(tri(n-1,memo)+tri(n-2,memo)+tri(n-3,memo))%10007;
    }
}
int main(){
    ll n; cin>>n;
    vector<ll> memo(n+1,-1);
    cout<<tri(n,memo)<<endl;
    return 0;
}
