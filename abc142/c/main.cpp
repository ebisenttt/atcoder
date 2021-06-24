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
    cin>>n;
    vector<int> person(n);
    int num;
    REP(i,n){
        cin>>num;
        person[num-1]=i+1;
    }
    REP(i,n){
        cout<<person[i];
        if(i!=SIZE(person)-1){
            cout<<" ";
        }
    }
    return 0;
}
