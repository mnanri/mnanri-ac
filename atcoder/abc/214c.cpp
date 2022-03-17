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
  vector<ll> s(n);
  vector<ll> t(n);
  for(int i=0;i<n;i++) cin >> s[i];
  for(int i=0;i<n;i++) cin >> t[i];

  vector<ll> ans(n);
  ans[0]=t[0];
  for(int i=1;i<2*n;i++) ans[i%n]=min(t[i%n],ans[(i-1)%n]+s[(i-1)%n]);

  for(int i=0;i<n;i++) cout << ans[i] << endl;
}
