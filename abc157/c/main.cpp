#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> S(m), C(m);
    for(int i=0; i<m; i++){
        cin >> S.at(i) >> C.at(i);
    }
    bool a = true;

    if(m==0){
        a = false;
    }

    if(n!=1){
        for(int i=0; i<m; i++){
            if(S.at(i)==1 && C.at(i)==0){
                a = false;
                break;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(S.at(i)==S.at(j) && C.at(i)!=C.at(j)){
                a = false;
                break;
            }
        }
    }

    if(a){
        vector<int> ans(n);
        for(int i=0; i<m; i++){
        ans.at(S.at(i)-1)=C.at(i);
        }
        if(n!=1 && ans.at(0)==0){
            ans.at(0) = 1;
        }
        for(int i=0; i<n; i++){
            cout << ans.at(i);
        }
    } else if(n==1 && m==0){
        cout << 0;
    } else if(m==0){
        cout << pow(10, n-1);

    }else{ 
        cout << -1;
    }

    return 0;
}
