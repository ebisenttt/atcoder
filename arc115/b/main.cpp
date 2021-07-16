#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1e9
typedef long long ll;
typedef long double ld;

bool checkCol(vector<vector<ll>> v){
  ll n = v[0].size();
  vector<vector<ll>> w(n-1, vector<ll> (n-1));
  REP(i,n-1){
    REP(j,n-1){
      w[i][j] = v[i][j] - v[i][j+1];
    }
  }
  REP(i,n-2){
    REP(j,n-2){
      if(w[i][j] != w[i+1][j])return false;
    }
  }
  return true;
}

bool checkRow(vector<vector<ll>> v){
  ll n = v[0].size();
  vector<vector<ll>> w(n-1, vector<ll> (n-1));
  REP(i,n-1){
    REP(j,n-1){
      w[i][j] = v[i][j] - v[i+1][j];
    }
  }
  REP(i,n-2){
    REP(j,n-2){
      if(w[i][j] != w[i][j+1])return false;
    }
  }
  return true;
}

int main(){
  ll n;
  cin >> n;
  vector<vector<ll>> v(n, vector<ll> (n));
  REP(i,n)REP(j,n)cin>>v[i][j];
  vector<ll> a(n), b(n);
  ll m = INF;
  REP(i,n) m = min(m, v[i][0]);
  REP(i,n) a[i] = v[i][0] - m;
  REP(i,n) b[i] = v[0][i] - a[0];
  REP(i,n){
    REP(j,n){
      if(a[i] + b[j] == v[i][j])continue;
      else{
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  REP(i,n){
    cout << a[i];
    if(i == n - 1)cout << endl;
    else cout << " ";
  }
  REP(i,n){
    cout << b[i];
    if(i == n - 1)cout << endl;
    else cout << " ";
  }
  return 0;
}
