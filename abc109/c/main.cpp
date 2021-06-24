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
    vector<ll> v(n+1);
    REP(i,n+1){
        cin>>v[i];
    }
    sort(ALL(v));
    if(n==1){
        cout<<v[1]-v[0]<<endl;
    }else{
        ll num=gcd(v[1]-v[0],v[2]-v[1]);
        FOR(i,2,n){
            num=gcd(num,v[i+1]-v[i]);
        }
        cout<<num<<endl;
    }
    
    return 0;
}
