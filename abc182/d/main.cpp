#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <map>
#include <fstream>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
#define INF 1e9 
typedef long long ll;
typedef long double ld;
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n+1),w(n+1);
    v[0]=0;
    FOR(i,1,n+1){
        cin>>v[i];
    }
    w=v;
    REP(i,2){
        FOR(j,1,n+1){
            w[j]+=w[j-1];
        }
    }
    ll m=MAX(w);
    ll itr=0;
    REP(i,n+1){
        if(m==w[i])itr=i;
    }
    ll max1=m;
    if(itr<n){
        REP(i,itr+1){
            max1+=v[i];
            if(max1>m)m=max1;
        }
    }
    ll max2=MAX(w);
    if(itr>1){
        for(int i=itr; i>0; i--){
            max2-=v[i];
            if(max2>m)m=max2;
        }
    }
    cout<<m<<endl;
    return 0;
}
