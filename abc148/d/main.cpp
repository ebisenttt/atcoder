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
    int n;
    cin >>n;
    bool is_1 = false;
    int a, num=1, count=0;
    REP(i,n){
        cin >>a;
        if(a==num){
            num++;
        }else{
            count++;
        }
    }
    int ans;
    if(count==n){
        ans=-1;
    }else{
        ans=count;
    }

    cout<<ans;

    return 0;
}
