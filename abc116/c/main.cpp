#include <bits/stdc++.h>
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
    ll n;
    cin>>n;
    vector<ll> v(n+2);
    FOR(i,1,n+1){
        cin>>v[i];
    }
    ll cnt=0;
    while(1){
        bool is=true;
        REP(i,n+1){
            if(v[i]<=0&&v[i+1]>0)cnt++;
            v[i]--;
            if(v[i]>0)is=false;
        }
        if(is)break;
    }
    cout<<cnt<<endl;
    return 0;
}
