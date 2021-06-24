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
    vector<double> v(5);
    vector<int> w(5);

    REP(i,5){
        double a;
        cin>>a;
        v[i]=a;
    }
    REP(i,5){
        double a=v[i];
        int b=ceil(a/10.0)*10;
        w[i]=b;
    }
    int m=10, itr=0;
    REP(i,5){
        int r = (int)v[i]%10;
        if(r<m && r>0){
            m=r;
            itr=i;
        }
    }
    int sum=0;
    REP(i,5){
        if(i==itr){
            sum+=v[i];
        }else{
            sum+=w[i];
        }
    }
    cout<<sum<<endl;

    return 0;
}
