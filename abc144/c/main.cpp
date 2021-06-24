#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;

int isPrime(ll num){
    if(num<2){
        return false;
    }else if(num==2){
        return true;
    }else if(num%2==0){
        return false;
    }
    for(int i=3; i<=sqrt(num); i+=2){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ll n;
    cin>>n;
    ll max;
    if(isPrime(n)){
        cout << n-1;
        return 0;
    }
    FOR(i,1,sqrt(n)+1){
        if(n%i==0){
            max=i;
        }
    }
    ll step;
    step = max-1+(n/max)-1;
    cout << step;
    return 0;
}
