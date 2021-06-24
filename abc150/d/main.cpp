#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <deque>
#include <numeric>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    REP(i,n){
        cin >> A[i];
    }
    vector<int> count_list(n);
    bool is = true;
    REP(i,n){
        int count=0;
        while(A[i]%2==0){
            count++;
        }
        count_list.push_back(count);
        if(i!=0 && count_list[i-1]!=count_list[i]){
            is = false;
            break;
        }
    }
    int l = A[0];
    REP(i,n){
        if(i==0){
            l = lcm(A[0], A[1]);
        }else{
            lcm(l, A[i+1]);
        }
    }
    int j = 1;
    int count2=0;
    while(l*j<=m){
        count2++;
        j+=2;
    }

    if(is){
        cout << count2;
    } else {
        cout << 0;
    }
    return 0;
}
