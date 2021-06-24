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
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int> (2));
    REP(i,n){
        cin>>v[i][0]>>v[i][1];
    }
    int cnt=0;
    bool is=false;
    REP(i,n){
        if(v[i][0]==v[i][1]){
            cnt++;
        }else{
            cnt=0;
        }
        if(cnt>=3){
            is=true;
            break;
        }
    }
    cout<<(is?"Yes":"No")<<endl;
    return 0;
}
