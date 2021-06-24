#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    if(a+b==0){
        cout << 0 << endl;
    }else{
        long long q,r;
        q =  n / (a + b);
        r = n % (a + b);
        cout << q * a + min(r, a) << endl;
    }
    return 0;
}