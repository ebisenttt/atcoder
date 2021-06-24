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
    ll n,m;
    cin>>n>>m;
    vector<ll> v;
    REP(i,m){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    vector<ll> fib(n+1);
    REP(i,n+1){
        if(i==0){
            fib[i]=1;
        }else if(i==1){
            fib[i]=1;
        }else{
            fib[i]=fib[i-1]%1000000007+fib[i-2]%1000000007;
        }
    }
    ll cnt=1;
    ll from=0;
    REP(i,m){
        ll to = v[i]-1;
        if(from>to){
            cnt=0;
            break;
        }else{
            cnt*=fib[to-from];
            cnt%=1000000007;
            from=v[i]+1;
        }
    }
    cnt*=fib[n-from];
    cnt%=1000000007;
    cout<<cnt<<endl;
    return 0;
}
