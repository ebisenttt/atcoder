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
    string ans;
    int y,m;
    y=n/100;
    m=n%100;
    if(1<=m&&m<=12){
        if(1<=y&&y<=12){
            ans="AMBIGUOUS";
        }else{
            ans="YYMM";
        }
    }else if(1<=y&&y<=12){
        ans="MMYY";
    }else{
        ans="NA";
    }
    cout<<ans<<endl;
    return 0;
}
