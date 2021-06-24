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
#define INF 1e10
int main(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n);
    ll x,y;
    REP(i,m){
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
        v[x].push_back(x);
        v[y].push_back(x);
        v[y].push_back(y);
    }
    ll ans=0;
    REP(bit, 1<<n){
        vector<ll> member;
        bool is=true;
        REP(i,n){
            if(bit&(1<<i))member.push_back(i);
        }
        for(auto& man1: member){
            for(auto& man2: member){
                if(find(ALL(v[man1]),man2)!=v[man1].end())continue;
                else{
                    is=false;
                    break;
                }
            }
        }
        if(is&&ans<SIZE(member))ans=SIZE(member);
    }
    cout<<((ans==0)?1:ans)<<endl;
    return 0;
}
