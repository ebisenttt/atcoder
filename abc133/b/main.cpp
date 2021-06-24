#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;
typedef long double ld;
int main(){
    int n,d;
    cin>>n>>d;
    vector<vector<ld>> v(n,vector<ld>(d)); 
    REP(i,n){
        REP(j,d){
            cin>>v[i][j];
        }
    }
    ll count=0;
    REP(i,n){
        FOR(j,i+1,n){
            ld sum=0.0;
            REP(k,d){
                sum+=pow(v[i][k]-v[j][k],2);
            }
            ll sum1=sum;
            if(sqrt(sum1)==sqrt(sum)){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
