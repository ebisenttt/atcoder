#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <map>
#include <fstream>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
#define INF 1e9 
typedef long long ll;
typedef long double ld;
int main(){
    string s;
    cin>>s;
    vector<string> v;
    FOR(i,100,1000){
        if(i%8==0){
            string num = to_string(i);
            v.push_back(num);
        }
    }
    string ans="No";
    if(s.size()<3){
        sort(ALL(s));
        do{
            ll n=stoi(s);
            if(n%8==0){
                ans="Yes";
                break;
            }
        }while(next_permutation(ALL(s)));
    }else{
        REP(i,v.size()){
            int cnt=0;
            string str=s;
            string num=v[i];
            REP(j,3){
                REP(k,str.size()){
                    if(num[j]==str[k]){
                        cnt++;
                        str=str.substr(0,k)+str.substr(k+1);
                        break;
                    }
                }
            }
            if(cnt==3){
                ans="Yes";
                break;
            };
        }
    }
    cout<<ans<<endl;
    return 0;
}
