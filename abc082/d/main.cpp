#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
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
    string s;cin>>s;
    ll x,y;cin>>x>>y;
    ll n=SIZE(s);
    vector<vector<bool>> dp_x(8000, vector<bool> (16010, false)), dp_y(8000, vector<bool> (16010, false));
    vector<ll> v_x,v_y;
    ll d=0, cnt=0;
    REP(i,n){
        if(s[i]=='F'){
            cnt++;
            if(i==n-1){
                if(d%2==0){
                    v_x.push_back(cnt);
                }else{
                    v_y.push_back(cnt);
                }
            }
        }else if(d%2==0){
            v_x.push_back(cnt);
            d++;
            cnt=0;
        }else{
            v_y.push_back(cnt);
            d++;
            cnt=0;
        }
    }
    REP(i,SIZE(v_x)){
        ll move_x=v_x[i];
        if(i==0){
            dp_x[0][move_x+8000]=true;
        }else{
            REP(j,16010){
                if(dp_x[i-1][j]==true){
                    dp_x[i][j+move_x]=true;
                    dp_x[i][j-move_x]=true;
                }
            }
        }
    }
    REP(i,SIZE(v_y)){
        ll move_y=v_y[i];
        if(i==0){
            dp_y[0][move_y+8000]=true;
            dp_y[0][-move_y+8000]=true;
        }else{
            REP(j,16010){
                if(dp_y[i-1][j]==true){
                    dp_y[i][j+move_y]=true;
                    dp_y[i][j-move_y]=true;
                }
            }
        }
    }
    bool is=false;
    if(SIZE(v_x)!=0 && SIZE(v_y)==0){
        if(dp_x[SIZE(v_x)-1][x+8000]==true){
            is=true;
        }
    }else if(SIZE(v_x)==0 && SIZE(v_y)!=0){
        if(dp_y[SIZE(v_y)-1][y+8000]==true){
            is=true;
        }
    }else{
        if(dp_x[SIZE(v_x)-1][x+8000]==true && dp_y[SIZE(v_y)-1][y+8000]==true){
            is=true;
        }
    }
    
    if(is){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}
