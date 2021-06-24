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
    ll n,l;
    cin>>n>>l;
    vector<ll> v;
    ll sum=0;
    REP(i,n){
        v.push_back(l+i);
        sum+=l+i;
    }
    ll m=10000;
    ll itr;
    REP(i,n){
        if(abs(v[i])<m){
            m=abs(v[i]);
            itr=i;
        }
    }
    cout<<sum-v[itr]<<endl;
    return 0;
}
