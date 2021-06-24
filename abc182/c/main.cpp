#include <bits/stdc++.h>
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
    string n;
    cin>>n;
    int ans=100;
    while(n.size()<19){
        n = "0" + n;
    }
    for(int i=0; i<(1<<19); i++){
        bitset<19> s(i);
        int sum=0;
        for(int j=0; j<19; j++){
            if(!s[j]){
                sum+=n[j]-48;
            }
        }
        if(sum%3==0 && sum!=0){
            int cnt=s.count();
            if(ans>cnt){
                ans=cnt;
            }
        }
    };
    if(ans==100)ans=-1;
    cout<<ans<<endl;
    return 0;
}
