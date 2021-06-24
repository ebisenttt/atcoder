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
    int n,t;
    cin>>n>>t;
    vector<vector<int>> v(n,vector<int> (2));
    REP(i,n){
        int c,time;
        cin>>c>>time;
        v[i]={c,time};
    }
    int m=10000;
    REP(i,n){
        if(v[i][0]<m&&v[i][1]<=t){
            m=v[i][0];
        }
    }
    if(m==10000){
        cout<<"TLE"<<endl;
    }else{
        cout<<m<<endl;
    }
    return 0;
}
