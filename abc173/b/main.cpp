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
    ll n;cin>>n;
    map<string,ll> v;
    v["AC"]=0;
    v["WA"]=0;
    v["TLE"]=0;
    v["RE"]=0;
    REP(i,n){
        string r;cin>>r;
        v.at(r)++;
    }

    vector<string> w={"AC","WA","TLE","RE"};
    REP(i,4){
        cout<<w[i]<<" x "<<v.at(w[i])<<endl;
    }
    return 0;
}
