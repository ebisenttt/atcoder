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
    ll n;
    cin>>n;
    vector<vector<ll>> v(n,vector<ll> (2));
    REP(i,n){
        cin>>v[i][1]>>v[i][0];
    }
    sort(ALL(v));
    ll sum=0;
    REP(i,n){
        sum+=v[i][1];
        if(sum<=v[i][0]){
            continue;
        }else{
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
