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
    int n,m;
    cin>>n>>m;
    vector<int> disks(n+1);
    REP(i,n+1){
        disks[i]=i;
    }
    REP(i,m){
        int next;
        cin>>next;
        FOR(j,1,n+1){
            if(disks[j]==next){
                swap(disks[0],next);
                disks[j]=next;
                break;
            }
        }
    }
    FOR(i,1,n+1){
        cout<<disks[i]<<endl;
    }
    return 0;
}
