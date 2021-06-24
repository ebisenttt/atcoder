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
    ll m = 1000000007;
    ll n;
    cin>>n;
    ll sum=0;
    vector<ll> v(n),w(n);
    REP(i,n){
        ll num;
        cin>>num;
        v[i]=num;
    }
    for(int i=n-1; i>=0; i--){
        w[i]=v[i];
        if(i<n-1){
            w[i]+=w[i+1];
            w[i]=w[i]%m;
        }
    }
    REP(i,n-1){
        sum+=(v[i]*w[i+1])%m;
        sum=sum%m;
    }
    cout<<sum<<endl;
    return 0;
}
