#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
#define INF 1e10
typedef long long ll;
typedef long double ld;
int main(){
     int n; cin>>n;
     string a; cin>>a;
     set<string> set;
     set.insert(a);
     string r="DRAW";
     REP(i,n-1){
         string b; cin>>b;
         int s=SIZE(a);
         if(a[s-1]!=b[0] || set.find(b)!=set.end()){
            if(i%2==1)r="LOSE";
            else r="WIN";
            break;
        }else{
            set.insert(b);
            a=b;
        }
        
     }
     cout<<r<<endl;
    return 0;
}
