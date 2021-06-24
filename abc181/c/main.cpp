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
        REP(j,2){
            int a;
            cin>>a;
            v[i][j]=a;
        }
    }
    string ans = "No";
    FOR(i,1,n-1){
        FOR(j,0,i){
            FOR(k,i+1,n){
                int a,b,c,d,e,f;
                a=v[j][0];
                b=v[j][1];
                c=v[i][0];
                d=v[i][1];
                e=v[k][0];
                f=v[k][1];
                if(a==c || c==e){
                    if(a==c&&c==e){
                        ans="Yes";
                    }
                }else if(b==d || d==f){
                    if(b==d&&d==f){
                        ans="Yes";
                    }
                }else if((b-d)*(c-e)==(a-c)*(d-f)){
                    ans="Yes";
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
