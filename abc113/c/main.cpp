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
    int n,m;
    cin>>n>>m;
    ll v[n+1];
    REP(i,m){
        ll p,y;
        cin>>p>>y;
        v[p].push_back({y,i});
    }
    sort(ALL(v));
    REP(i,m){
        REP(j, v[i].size()){
            string num = format()
        }
    }
    return 0;
}
