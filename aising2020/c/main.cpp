#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size()
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1e9 
typedef long long ll;
typedef long double ld;
int main(){
  ll n;
  cin>>n;
  vector<int> v;
  map<ll,ll> m;
  FOR(a,1,105){
    FOR(b,1,105){
      FOR(c,1,105){
        ll num = a*a+b*b+c*c+a*b+b*c+c*a;
        if(m.count(num)>0)m.at(num)++;
        else m.insert(make_pair(num,1));
        if(num==57){
          v.push_back(a);
          v.push_back(b);
          v.push_back(c);
        };
      }
    }
  }
  vector<int> w;
  map<ll,ll> l;
  FOR(a,1,sqrt(n)+1){
    FOR(b,a,sqrt(n)+1){
      FOR(c,b,sqrt(n)+1){
        ll num = a*a+b*b+c*c+a*b+b*c+c*a;
        ll cnt;
        if(a==b&&b==c)cnt=1;
        else if(a==b||b==c)cnt=3;
        else cnt=6;
        l.insert(make_pair(num,cnt));
        if(num==57){
          w.push_back(a);
          w.push_back(b);
          w.push_back(c);
        }
      }
    }
  }
  FOR(i,1,n+1){
    cout<< i << ": ";
    if(m.count(i)>0)cout<< m.at(i) <<" ";
    else cout<< 0 <<" ";
    if(l.count(i)>0)cout<< l.at(i) <<endl;
    else cout<< 0 <<endl;
  }
  REP(i,v.size()){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  REP(i,w.size()){
    cout<<w[i]<<" ";
  }
  cout<<endl;
  return 0;
}
