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
  ll n,w;
  cin >> n >> w;
  vector<pair<ll,ll> > c(n);
  for(int i=0;i<n;i++) cin >> c[i].first >> c[i].second;

  sort(c.begin(),c.end());
  reverse(c.begin(),c.end());

  ll y=0;
  for(int i=0;i<n;i++){
    if(w)
  }

}
