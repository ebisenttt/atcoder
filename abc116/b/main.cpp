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
    int s;
    cin>>s;
    set<int> set;
    int num=s;
    set.insert(s);
    FOR(i,2,1000005){
        if(num%2==0){
            num=num/2;
        }else{
            num=3*num+1;
        }
        if(set.count(num)>0){
            cout<<i<<endl;
            break;
        }else{
            set.insert(num);
        }
    }

    return 0;
}
