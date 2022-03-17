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
  vector<pair<ll, ll> > f(n);
  for(int i=0;i<n;i++) cin >> f[i].first >> f[i].second;
  sort(f.begin(),f.end());

  ll s=0;
  for(int i=0;i<n;i++){
    if(f[i].first-s<=k){
      ll tmp=-f[i].first+s+f[i].second;
      s=f[i].first;
      k+=tmp;
    }else{
      cout << s+k << endl;
      return 0;
    }
  }
  cout << s+k << endl;
}
