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
    ll n,m,c,b,a;
    cin>>n>>m>>c;
    vector<ll> v;
    ll w[n][m];
    REP(i,m){
        cin>>b;
        v.push_back(b);
    }
    REP(i,n){
        REP(j,m){
            cin>>a;
            w[i][j]=a;
        }
    }
    ll sum=0,ans=0;
    REP(i,n){
        REP(j,m){
            sum+=w[i][j]*v[j];
        }
        sum+=c;
        if(sum>0)ans++;
        sum=0;
    }
    cout<<ans<<endl;
    return 0;
}
