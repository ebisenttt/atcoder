#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    int d_min=100000000;
    if(k==1){
        d_min=0;
    }else{
    REP(i,n){
        cin>>v[i];
    }
    ll left,right,d;
    
    REP(i,n-k+1){
        left=v[i];
        right=v[i+k-1];
        if(abs(left)>abs(right)){
            d=abs(right)+abs(left-right);
        }else{
            d=abs(left)+abs(right-left);
        }
        if(d<d_min){
            d_min=d;
        }
    }
    }
    cout<<d_min;
    return 0;
}
