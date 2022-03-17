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
  ll n;
  cin >> n;
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  ll ans=n*(n-1)/2;
  map<ll,ll> b;
  for(int i=0;i<n;i++){
    if(b.count(a[i])){
      b[a[i]]++;
    }else{
      b[a[i]]=1;
    }
  }
  for(auto p : b){
    auto v=p.second;
    ll tmp=v*(v-1)/2;
    ans-=tmp;
  }
  cout << ans << endl;
}
