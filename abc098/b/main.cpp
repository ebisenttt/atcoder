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
    cin>>n>>s;
    vector<char> set;
    REP(i,n){
        if(find(ALL(set),s[i])==set.end()){
            set.push_back(s[i]);
        };
    }
    int m=0;
    REP(i,n){
        int cnt=0;
        string t=s.substr(0,i), u=s.substr(i);
        REP(j,set.size()){
            char c=set[j];
            if(find(ALL(t), c)!=t.end() && find(ALL(u),c)!=u.end()){
                cnt++;
            }
        }
        if(cnt>m)m=cnt;
    }
    cout<<m<<endl;
    return 0;
}
