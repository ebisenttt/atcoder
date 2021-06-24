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
    ll n; cin>>n;
    ll h,m,s;
    h=n/3600;
    m=(n-h*3600)/60;
    s=(n-h*3600-m*60);
    vector<ll> v={h,m,s};
    string ans="";
    REP(i,3){
        string a=to_string(v[i]);
        if(v[i]<10)ans=ans+"0"+a;
        else ans+=a;
        if(i!=2)ans+=":";
    }
    cout<<ans<<endl;
    return 0;
}
