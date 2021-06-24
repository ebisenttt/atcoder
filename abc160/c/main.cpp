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
    ll k,n;
    cin>>k>>n;
    vector<ll> v;
    REP(i,n){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    vector<ll> w;
    FOR(i,1,n){
        w.push_back(v[i]-v[i-1]);
    }
    w.push_back(k-v[n-1]+v[0]);
    cout<<k-MAX(w)<<endl;

    return 0;
}
