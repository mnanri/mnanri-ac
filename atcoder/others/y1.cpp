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

int main(){
  int n,k;
  cin >> n >> k;
  vector<pair<ll,ll> > product(n);
  for(int i=0;i<n;i++) cin >> product[i].first >> product[i].second;

  ll ans=0;
  for(int i=0;i<n;i++){
    if(product[i].first>=k){
      ans+=product[i].second;
    }
  }

  cout << ans << endl;
}
