#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<utility>
#include<tuple>
#include<map>
#include<queue>
#include<stack>
#include<deque>
#include<bitset>
#include<math.h>
#include<numeric>
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
  ll h,w,n;
  cin >> h >> w >> n;
  vector<pair<ll,ll> > c(n);
  for(int i=0;i<n;i++){
    ll a,b;
    cin >> a >> b;
    c[i].first=a,c[i].second=b;
  }
  vector<ll> x(n),y(n);
  for(int i=0;i<n;i++){
    x[i]=c[i].first;
    y[i]=c[i].second;
  }
  sort(x.begin(),x.end());
  sort(y.begin(),y.end());

  map<ll,ll> p,q;
  int cnt=0;
  for(int i=0;i<n;i++){
    if(!p.count(x[i])){
      cnt++;
      p[x[i]]=cnt;
      //cout << cnt << endl;
    }
  }
  cnt=0;
  for(int i=0;i<n;i++){
    if(!q.count(y[i])){
      cnt++;
      q[y[i]]=cnt;
      //cout << cnt << endl;
    }
  }

  for(int i=0;i<n;i++){
    cout << p[c[i].first] << ' ' << q[c[i].second] << endl;
  }
}
