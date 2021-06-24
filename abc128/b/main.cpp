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
    string s;
    int p;
    cin>>n;
    vector<vector<string>> v;
    REP(i,n){
        cin>>s>>p;
        string point = to_string(200-p);
        v.push_back({s,point,to_string(i+1)});
    }
    sort(ALL(v));
    REP(i,n){
        cout<<v[i][2]<<endl;
    }
    return 0;
}
