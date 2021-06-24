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
    ll INF=1e4;
    ll t,n; cin>>t>>n;
    vector<ll> a(n);
    REP(i,n)cin>>a[i];
    ll m; cin>>m;
    vector<ll> b(m);
    REP(i,m)cin>>b[i];
    bool is=true;
    if(n<m){
        is=false;
    }else{    
        REP(i,m)REP(j,n){
            ll oct=a[j], cus=b[i];
            if(oct<=cus && cus<=oct+t){
                a[i]=INF;
                b[i]=INF;
                break;
            }else if(j==n-1){
                is=false;
                break;
            }
        }
    }
    string ans;
    if(is){
        ans="yes";
    }else{
        ans="no";
    }
    cout<<ans<<endl;
    return 0;
}
