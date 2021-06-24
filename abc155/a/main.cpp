#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >>a >>b >>c;
    bool d = false;
    if(a==b && b!=c){
        d= true;
    }else if(b==c && c!=a){
        d= true;
    }else if(c==a && a!=b){
        d= true;
    }
    if(d){
        cout << "Yes";
    } else {
        cout << "No";
    }

}
