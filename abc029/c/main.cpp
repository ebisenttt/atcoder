#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define RFOR(i, m, n) for(int i = m; i > n; i--)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
#define INF 1e10
typedef long long ll;
typedef long double ld;

int main(){
    ll n;
    cin>>n;
    vector<string> v={"a","b","c"};
    queue<string> q;
    REP(i,3)q.push(v[i]);
    while(q.front().length()<n){
        REP(i,3){
            string s=q.front()+v[i];
            q.push(s);
        }
        q.pop();
    }
    while(q.size()!=0){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;

}
