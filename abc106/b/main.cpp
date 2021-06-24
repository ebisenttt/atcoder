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
    int n,ans;
    cin>>n;
    if(n<105){
        ans=0;
    }else if(n<135){
        ans=1;
    }else if(n<165){
        ans=2;
    }else if(n<189){
        ans=3;
    }else if(n<195){
        ans=4;
    }else{
        ans=5;
    }
    cout<<ans<<endl;
    return 0;
}
