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
    vector<ll> v;
    REP(i,n){
        ll l;
        cin>>l;
        v.push_back(l);
    }
    int cnt=0;
    REP(i,n-2){
        FOR(j,i+1,n-1){
            FOR(k,j+1,n){
                ll a=v[i], b=v[j], c=v[k];
                if(a!=b && b!=c && c!=a && a<b+c && b<c+a && c<a+b){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
