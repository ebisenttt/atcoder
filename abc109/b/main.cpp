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
    int n;
    cin>>n;
    vector<string> v(n);
    set<string> s;
    REP(i,n){
        cin>>v[i];
        s.insert(v[i]);
    }
    string ans="Yes";
    REP(i,n-1){
        if(v[i][v[i].size()-1]!=v[i+1][0]){
            ans="No";
            break;
        }
    }
    if(s.size()!=n)ans="No";
    cout<<ans<<endl;
    return 0;
}
