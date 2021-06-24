#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define REP(i, n) for(ll i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;

bool is_sameArray(vector<int> a,vector<int>b){
    int n=SIZE(a);
    REP(i,n){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> list(n);
    REP(i,n){
        cin>>list[i];
    }
    sort(ALL(list));
    vector<vector<int>> sides(n-2, vector<int>(3));
    REP(i,n-2){
        REP(j,3){
            sides[i][j]=list[i+j];
        }
    }
    int count=0;
    REP(i,SIZE(sides)){
        if(!is_sameArray(sides[i],sides[i+1])){
            if(sides[i][0]+sides[i][1]<sides[i][2]
            &&sides[i][1]+sides[i][2]<sides[i][0]
            &&sides[i][2]+sides[i][0]<sides[i][1]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
