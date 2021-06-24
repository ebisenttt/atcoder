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
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    vector<int> a(n), b(m);
    REP(i,n){
        int num;
        cin>>num;
        a[i]=num;
    }
    REP(i,m){
        int num;
        cin>>num;
        b[i]=num;
    }
    int c=MAX(a), d=MIN(b);
    string ans;
    if(c<d&&c<y&&x<d){
        ans="No War";
    }else{
        ans="War";
    }
    cout<<ans<<endl;
    return 0;
}
