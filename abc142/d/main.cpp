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

vector<ll> makePrimeList(ll min, ll max){
    if(min<=2){
        min=3;
    }
    vector<ll> list={2};
    FOR(i,min,max+1){
        bool is_i_prime=true;
        ll j=0;
        while(list[j]*list[j]<=i){
            if(i%list[j]==0){
                is_i_prime=false;
                break;
            }
            j++;
        }
        if(is_i_prime){
            list.push_back(i);
        }
    }
    return list;
}

bool isPrime(ll num){
    if(num<2){
        return false;
    }else if(num==2){
        return true;
    }else if(num%2==0){
        return false;
    }else{
        FOR(i,3,sqrt(num)+1){
            if(num%i==0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    ll a,b;
    cin>>a>>b;
    ll small=min(a,b);
    vector<ll> primeList;
    if(isPrime(small)){
        primeList={small};
    }else{
        primeList=makePrimeList(2,small/2);
    }
    ll count=0;
    REP(i,SIZE(primeList)){
        if(a%primeList[i]==0 && b%primeList[i]==0){
            count++;
        }
    }
    cout << count+1;
    return 0;
}
