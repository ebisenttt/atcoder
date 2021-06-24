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
    vector<ll> v(n);
    REP(i,n){
        ll a;
        cin>>a;
        if(i%2==0)v[n/2+i/2]=a;
        else v[n/2-(i+1)/2]=a;
    }
    if(n%2!=0){
        for(int i=n-1; i>-1; i--){
            cout<<v[i];
            if(i==0)cout<<endl;
            else cout<<" ";
        }
    }else{
        REP(i,n){
            cout<<v[i];
            if(i==n-1)cout<<endl;
            else cout<<" ";
        }
    }

    return 0;
}
