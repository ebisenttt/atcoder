#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <map>
#include <stack>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
#define INF 1e10
typedef long long ll;
typedef long double ld;
int main(){
    vector<vector<char>> v(12,vector<char> (12));
    vector<vector<int>> done(12,vector<int> (12));
    REP(i,12)REP(j,12){
        if(i*j==0 || i==11 || j==11){
            v[i][j]='x';
        }else{
            cin>>v[i][j];
        }
        if(v[i][j]=='x')done[i][j]=1;
    }
    vector<ll> movel={1,-1,0,0}, movec={0,0,1,-1};
    FOR(i,1,11)FOR(j,1,11){
        vector<vector<char>> w(12,vector<char> (12));
        vector<vector<int>> done1(12,vector<int> (12));
        w=v;
        done1=done;
        if(w[i][j]=='o')continue;
        else{
            bool is=true;
            stack<pair<ll,ll>> todo;
            todo.push(make_pair(i,j));
            done1[i][j]=1;
            w[i][j]='o';
            while(!todo.empty()){
                pair<ll,ll> now=todo.top();
                todo.pop();
                REP(s,4){
                    ll l=now.first+movel[s], c=now.second+movec[s];
                    if(w[l][c]=='o' && done1[l][c]!=1){
                        todo.push(make_pair(l,c));
                        done1[l][c]=1;
                    }
                }
            }
            REP(k,12)if(find(ALL(done1[k]),0)!=done1[k].end()){
                is=false;
                break;
            }
            if(is){cout<<"YES"<<endl;return 0;}
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
