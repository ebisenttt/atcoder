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
    vector<int> v(20),c(20);
    REP(i,n){
        int a;
        cin>>a;
        v[i]=a;
    }
    REP(i,n){
        int a;
        cin>>a;
        c[i]=a;
    }
    int m=0, num=0;
    REP(i,1<<20){
        num=0;
        bitset<20> bit(i);
        REP(j,20){
            if(bit.test(j)){
                num+=v[j]-c[j];
            }
        }
        if(m<num){
            m=num;
        }
    }
    cout<<m<<endl;
    return 0;
}
