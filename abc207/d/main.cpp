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

int main(){
  ll n;
  cin >> n;
  vector<pair<ll,ll>> s(n), t(n);
  REP(i,n){
    ll a,b;
    cin>>a>>b;
    s[i]={a,b};
  }
  REP(i,n){
    ll c,d;
    cin>>c>>d;
    t[i]={c,d};
  }
  
  REP(i,n){
    REP(k, n){
      ll x = t[k].first;
      ll y = t[k].second;
      //tの半径
      map<ll, ll> rads_t;
      REP(j,n){
        ll r = pow(t[j].first - x, 2) + pow(t[j].second - y, 2);
        if(rads_t.count(r) > 0)rads_t.at(r)++;
        else rads_t.insert({r, 1});
      }
      //平行移動
      ll difx = x - s[i].first;
      ll dify = y - s[i].second;
      vector<pair<ll,ll>> tmp(n);
      REP(j,n){
        tmp[j].first = s[j].first + difx;
        tmp[j].second = s[j].second + dify;
        //
        // cout << "tmp[" << j << "]: " <<tmp[j].first << ","<<tmp[j].second<<endl;
      }
      //半径の計算
      map<double,ll> rads_tmp;
      REP(j,n){
        ll r = pow(tmp[j].first - x, 2) + pow(tmp[j].second - y, 2);
        if(rads_tmp.count(r) > 0)rads_tmp.at(r)++;
        else rads_tmp.insert({r, 1});
      }
      bool issame = true;
      for(auto p: rads_tmp){
        ll r = p.first;
        ll cnt = p.second;
        if(rads_t.count(r) > 0 && rads_t.at(r) == cnt)continue;
        else {
          issame = false;
          break;
        }
      }
      if(issame){
        cout<<"Yes"<<endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
