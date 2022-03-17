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
  int n,k;
  cin >> n >> k;
  vector<ll> c(n);
  for(int i=0;i<n;i++) cin >> c[i];

  map<ll,ll> cnt;
  for(int i=0;i<k;i++){
    if(cnt.count(c[i])){
      cnt.at(c[i])++;
    }else{
      cnt[c[i]]=1;
    }
  }
  ll ans=cnt.size();
  for(int i=k;i<n;i++){
    if(cnt[c[i-k]]==1){
      cnt.erase(c[i-k]);
    }else{
      cnt.at(c[i-k])--;
    }
    if(cnt.count(c[i])){
      cnt.at(c[i])++;
    }else{
      cnt[c[i]]=1;
    }
    ll tmp=cnt.size();
    ans=max(ans,tmp);
  }
  cout << ans << endl;
}
