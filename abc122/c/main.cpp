#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
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
    int n,q,l,r,count=0;
    string s;
    cin>>n>>q>>s;
    vector<int> v(n);
    REP(i,n-1){
        if(s[i]=='A' && s[i+1]=='C'){
            count++;
        }
        v[i+1]=count;
    }
    REP(i,q){
        cin>>l>>r;
        int num=v[r-1]-v[l-1];
        cout<<num<<endl;
    }
    return 0;
}
