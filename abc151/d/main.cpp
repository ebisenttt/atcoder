#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;

bool up(vector<vector<string>> maze, int n, int m){
    if(n-1<0){
        return false;
    }
    if(maze[n-1][m]=="#"){
        return false;
    }
    return true;
}

bool down(vector<vector<string>> maze, int n, int m){
    int h = SIZE(maze);
    if(n+1>h){
        return false;
    }
    if(maze[n+1][m]=="#"){
        return false;
    }
    return true;
}

bool right(vector<vector<string>> maze, int n, int m){
    int w = SIZE(maze[0]);
    if(m+1>w){
        return false;
    }
    if(maze[n][m+1]=="#"){
        return false;
    }
    return true;
}

bool left(vector<vector<string>> maze, int n, int m){
    if(m-1<0){
        return false;
    }
    if(maze[n][m-1]=="#"){
        return false;
    }
    return true;
}

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<string>> maze(h, vector<string>(w));
    REP(i, h){
        REP(j, w){
            cin >> maze[i][j];
        }
    }
    
    return 0;
}
