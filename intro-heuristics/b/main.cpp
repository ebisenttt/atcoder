#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
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
    ll d;cin>>d;
    vector<ll> c(26);
    REP(i,26){
        cin>>c[i];
    }
    vector<vector<ll>> s(d,vector<ll> (26));
    REP(i,d){
        REP(j,26){
            cin>>s[i][j];
        }
    }
    vector<ll> t(d);
    REP(i,d){
        cin>>t[i];
    }
    ll sts=0;
    REP(i,d){
        ll day=i, type=t[i]-1;
        map<ll,ll> days;
        REP(j,26){
            if(days.find(type)==days.end()){
                days.insert(make_pair(type,0));
            }else{
                REP()
            }
            ll decrease=0;
            decrease+=c[type]*(day-1-)
        }
        sts+=s[day][type]-decrease;
        cout<<sts<<endl;
    }
    return 0;
}
