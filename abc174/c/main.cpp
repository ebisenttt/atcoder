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
    ll k; cin>>k;
    ll n=0;
    ll i=0;
    if(k%2==0){
        cout<<-1<<endl;
    }else{
        while(1){
            n+=7*pow(10,i);
            if(n%k==0){
                cout<<i+1<<endl;
                break;
            }else{
                i++;
            }   
        }
    }
    return 0;
}
