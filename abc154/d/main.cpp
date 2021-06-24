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
    ll n,k;
    cin >> n >> k;
    vector<ld> v(n);
    REP(i,n){
        ld a;
        cin>>a;
        v[i]=(a+1.0)/2.0;
    }
    FOR(i,1,n){
        v[i]+=v[i-1];
    }
    ld M=0;
    FOR(i,k-1,n){
        ld sum;
        if(i-k<0)sum=v[i];
        else sum=v[i]-v[i-k];
        if(sum>M)M=sum;
    }
    cout<<fixed<<setprecision(7)<<M<<endl;
    return 0;
}
