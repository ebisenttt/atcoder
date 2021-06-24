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
    string s;
    cin>>s;
    bool is = true;
    int cnt=0;
    REP(i,s.size()){
        if(i==0){
            if(s[i]=='A'){
                continue;
            }else{
                is=false;
                break;
            }
        }else if(i>1&&i<s.size()-1){
            if(s[i]=='C'){
                cnt++;
            }else if(s[i]<97){
                is=false;
                break;
            }
        }else{
            if(s[i]<97){
                is=false;
                break;
            }
        }
    }
    if(cnt!=1){
        is=false;
    }
    string ans = is?"AC":"WA";
    cout<<ans<<endl;
    return 0;
}
