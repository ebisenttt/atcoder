#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> list(n);
    for(int i=0; i<n; i++){
        cin >> list.at(i);
    }
    vector<int> dis_sum_list(100);
    for(int p=0; p<100; p++){
        int dis_sum = 0;
        for(int i=0; i<n; i++){
            dis_sum += pow(list.at(i) - p-1, 2);
        }
        dis_sum_list.at(p) = dis_sum;
    }

    int m=1000000;
    for(int i=0; i<100; i++){
        if(m>dis_sum_list.at(i)){
            m = dis_sum_list.at(i);
        }
    }
    cout << m;
}
