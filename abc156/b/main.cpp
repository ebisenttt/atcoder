#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int p=0;
    while(pow(k, p) <= n){
        p++;
    }
    cout << p;
    return 0;
}