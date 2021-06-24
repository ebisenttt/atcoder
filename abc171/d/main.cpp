#include <bits/stdc++.h>
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
    ll n;
    cin>>n;
    map<ll,ll> mp;
    ll sum=0;
    REP(i,n){
        ll a;
        cin>>a;
        sum+=a;
        if(mp.find(a)!=mp.end()){
            mp.at(a)++;
        }else{
            mp.insert(make_pair(a,1));
        }
    }
    ll q;
    cin>>q;
    REP(i,q){
        ll a,b;
        cin>>a>>b;
        if(mp.find(a)!=mp.end()){
            sum+=(b-a)*mp.at(a);
            if(mp.find(b)!=mp.end()){
                mp.at(b)+=mp.at(a);
            }else{
                mp.insert(make_pair(b,mp.at(a)));
            }
            mp.at(a)=0;
        }
        cout<<sum<<endl;
    }
    return 0;
}
