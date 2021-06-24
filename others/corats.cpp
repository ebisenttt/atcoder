#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
typedef long long ll;

int main(){
    ll n; cin>>n;
    vector<ll> v;
    while(n!=1){
        v.push_back(n);
        if(n%2==0){
            n/=2;
        }else{
            n=3*n+1;
        }
        
    }
    for(auto &a: v){
        cout<<a<<" ";
    }
    return 0;
}