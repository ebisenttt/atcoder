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
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> v={a,b,c};
    sort(ALL(v),greater());
    cout<<v[0]*10+v[1]+v[2]<<endl;
    return 0;
}
