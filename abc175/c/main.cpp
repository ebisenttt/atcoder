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
    ll x,k,d,r,t;
    cin>>x>>k>>d;
    x=abs(x);
    ll ans;
    r=x%d;
    t=(x-r)/d;
    if(t<k){
        if((k-t)%2==0){
            ans=r;
        }else{
            ans=abs(r-d);
        }
    }else{
        ans=x-k*d;
    }
    cout<<ans<<endl;
    return 0;
}
