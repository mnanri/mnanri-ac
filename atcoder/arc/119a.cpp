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
  ll n;
  cin >> n;
  ll ni=2;
  ll b=1;
  ll ans=n;
  while(ni<=n){
    ll a=n/ni;
    ll c=n%ni;
    ans=min(ans,a+b+c);
    b++,ni*=2;
  }
  cout << ans << endl;
}
