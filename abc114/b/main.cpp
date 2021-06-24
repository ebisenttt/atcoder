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
    int m=1000,r;
    REP(i,s.size()-2){
        string a = s.substr(i,3);
        int num = stoi(a);
        r = abs(753-num);
        if(m>r)m=r;
    }
    cout<<m<<endl;
    return 0;
}
