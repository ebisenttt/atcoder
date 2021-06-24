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

int step(ll num){
    if(num<=1){
        return 1;
    }else{
        return step(num-1) + step(num-2);
    }
}

int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> v;
    REP(i,m){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll cnt=1, from=0;
    REP(i,m){
        ll to = v[i]-1;
        cnt*=step(to-from);
        cnt%=1000000007;
        from = v[i]+1;
        if(find(ALL(v),from)!=v.end()){
            cnt=0;
            break;
        }
    }
    cnt*=step(n-from);
    cnt%=1000000007;
    cout<<cnt<<endl;
    return 0;
}

