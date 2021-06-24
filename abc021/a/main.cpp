#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i <= n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;
typedef long double ld;
int main(){
    ll n; cin>>n;
    ll cnt;
    vector<ll> v;
    if(n%2==0){
        cnt=0;
    }else{
        n--;
        cnt=1;
        v.push_back(1);
    }
    while(n!=0){
        n-=2;
        v.push_back(2);
        cnt++;
    }
    v.push_back(cnt);
    for(int i=SIZE(v)-1; i>=0; i--)cout<<v[i]<<endl;
    return 0;
}
