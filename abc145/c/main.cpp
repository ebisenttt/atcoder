#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
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
    cin>>n;
    
    vector<int> vec_x(n),vec_y(n);
    REP(i,n){
        cin>>vec_x[i];
        cin>>vec_y[i];
    }

    long double distance_sum=0.0, distance, x_dif, y_dif;
    REP(i,n-1){
        FOR(j,i+1,n){
            x_dif=vec_x[i]-vec_x[j];
            y_dif=vec_y[i]-vec_y[j];
            distance = sqrt(x_dif*x_dif+y_dif*y_dif);
            distance_sum+=distance;
        }
    }
    
    long double distance_ave = 2*distance_sum/n;
    cout<< fixed << setprecision(10)<< distance_ave;
    return 0;
}
