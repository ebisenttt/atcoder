#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
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
    ll n,a,b,c; cin>>n>>a>>b>>c;
    vector<ll> v={a,b,c};
    bool is;
    int cnt=0;
    if(find(ALL(v),n)!=v.end())is=false;
    else{
        while(n>0){
            if(find(ALL(v),n-3)==v.end())n-=3,cnt++;
            else if(find(ALL(v),n-2)==v.end())n-=2,cnt++;
            else if(find(ALL(v),n-1)==v.end())n-=1,cnt++;
            else break;
        }
        if(n<=0 && cnt<=100)is=true;
    }
    cout<<(is?"YES":"NO")<<endl;
    return 0;
}
