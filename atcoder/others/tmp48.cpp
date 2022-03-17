#include<iostream>
#include<iomanip>
#include<string>
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
  ll n,k;
  cin >> n >> k;
  vector<pair<ll,ll> > q(n);
  for(int i=0;i<n;i++) cin >> q[i].second >> q[i].first;

  sort(q.begin(),q.end());
  reverse(q.begin(),q.end());

  ll p=k;
  ll sum=0;
  for(int i=0;i<n;i++){
    sum+=q[i].first;
    p--;
    if(p==0) break;
  }

  if(p==0){
    vector<ll> d(k);
    for(int i=0;i<k;i++) d[i]=q[i].second-q[i].first;
    sort(d.begin(),d.end());
    reverse(d.begin(),d.end());
    for(int i=0;i<k;i++){
      if(d[i]>q[k-i-1].first){
        ll tmp=d[i]-q[k-i-1].first;
        sum+=tmp;
      }else{
        break;
      }
    }
  }else{
    vector<ll> d(n);
    for(int i=0;i<n;i++) d[i]=q[i].second-q[i].first;
    sort(d.begin(),d.end());
    reverse(d.begin(),d.end());
    ll r=p;
    for(int i=0;i<n;i++){
      sum+=d[i];
      p--;
      if(p==0) break;
    }
    for(int i=0;i<n-r;i++){
      if(d[i+r]>q[n-1-i].first){
        ll tmp=d[i+r]-q[n-1-i].first;
        sum+=tmp;
      }else{
        break;
      }
    }
  }

  cout << sum << endl;
}
