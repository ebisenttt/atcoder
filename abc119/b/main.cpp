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
    string s;
    ld m;
    ld sum=0;
    REP(i,n){
        cin>>m>>s;
        if(s=="JPY"){
            sum+=m;
        }else{
            sum+=m*380000.0;
        }
    }
    cout<<fixed<<setprecision(6)<<sum<<endl;
    return 0;
}
