#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
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
    ll n;cin>>n;
    vector<ll> v(n);
    REP(i,n)cin>>v[i];
    ll cnt=0;
    vector<ll> w(n);
    REP(i,n)if(v[i]==i+1)w[i]=1;
    REP(i,n-1){
        if(w[i]==1){
            w[i]=0;
            w[i+1]=0;
            cnt++;
        }
    }
    if(w[n-1]==1){
        w[n-1]=0;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
