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
  vector<ll> c(n);
  for(int i=0;i<n;i++) cin >> c[i];

  sort(c.begin(),c.end());
  ll sum=1;
  for(int i=0;i<n;i++){
    if(i>=c[i]){
      cout << 0 << endl;
      return 0;
    }
    sum*=(c[i]-i);
    sum%=M;
  }
  cout << sum << endl;
}
