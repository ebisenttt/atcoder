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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int p=c-a, q=d-b;
    vector<int> v={c-q,d+p,c-q-p,d+p-q};
    REP(i,3){
        cout<<v[i]<<" ";
    }
    cout<<v[3]<<endl;
    return 0;
}
