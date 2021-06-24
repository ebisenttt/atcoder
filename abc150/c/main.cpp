#include <iostream>
#include <vector>
#include <cmath>
#include <iterator>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int p,q, p_sum=0, q_sum=0;
    //数pを作る
    REP(i,n){
        cin >> p;
        p_sum += p*pow(10,n-i-1);
    }
    //数qを作る
    REP(i,n){
        cin >> q;
        q_sum += q*pow(10,n-i-1);
    }
    //1からnまでの配列を作る
    vector<int> list(n);
    REP(i,n){
        list[i]=i+1;
    }
    
    //辞書順の配列を作る
    vector<int> dic_list;
    do{
        int sum=0;
        REP(i, n){
            sum += list[i]*pow(10,n-1-i);
        }
        dic_list.push_back(sum);
    }while(next_permutation(ALL(list)));

    //辞書順の配列から検索するイテレータを取得する
    int d1, d2;
    auto itr_p = find(ALL(dic_list), p_sum);
    auto itr_q = find(ALL(dic_list), q_sum);

    //イテレータで添字を求める
    d1 = distance(dic_list.begin(), itr_p);
    d2 = distance(dic_list.begin(), itr_q);

    //2数間の距離を求める
    cout << abs(d1-d2);
    
    return 0;
}
