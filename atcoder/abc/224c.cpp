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
  int n;
  cin >> n;
  vector<pair<ll,ll> > c(n);
  for(int i=0;i<n;i++) cin >> c[i].first >> c[i].second;

  ll cnt=0;
  for(int k=0;k<n;k++){
    for(int i=k+1;i<n;i++){
      for(int j=i+1;j<n;j++){
        if((c[i].second-c[k].second)*(c[j].first-c[i].first)!=((c[j].second-c[i].second)*(c[i].first-c[k].first))) cnt++;
      }
    }
  }
  cout << cnt << endl;
}
