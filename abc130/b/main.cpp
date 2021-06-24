#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size()
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1e9 
typedef long long ll;
typedef long double ld;
int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n+1);
    v[0]=0;
    FOR(i,1,n+1){
        ll l;
        cin>>l;
        v[i]=v[i-1]+l;
    }
    ll cnt=0;
    REP(i,n+1){
        if(v[i]<=x)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
