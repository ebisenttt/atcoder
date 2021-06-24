#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) (ll)(x).size()
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1e9 
typedef long long ll;
typedef long double ld;
int main(){
    string s;
    cin>>s;
    int m=0, cnt=0;
    vector<char> v={'A','C','G','T'};
    REP(i,s.size()){
        if(find(ALL(v),s[i])!=v.end()){
            cnt++;
        }else if(cnt>m){
            m=cnt;
            cnt=0;
        }else{
            cnt=0;
        }
    }
    if(cnt>m){
        m=cnt;
    }
    cout<<m<<endl;
    return 0;
}