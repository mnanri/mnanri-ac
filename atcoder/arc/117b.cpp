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
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  sort(a.begin(),a.end());
  ll tmp=0;
  vector<ll> b(n);
  for(int i=0;i<n;i++){
    b[i]=a[i]-tmp;
    tmp=a[i];
  }

  for(int i=0;i<n;i++) b[i]++;

  ll ans=1;
  for(int i=0;i<n;i++){
    ans*=b[i];
    ans%=M;
  }

  cout << ans << endl;
}
