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
  int n;
  cin >> n;
  vector<ll> a(n),b(n),c(n);
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n;i++) cin >> b[i];
  for(int i=0;i<n;i++) cin >> c[i];

  vector<ll> x(n+1,0), y(n+1,0);
  for(int i=0;i<n;i++) x[a[i]]++;
  for(int i=0;i<n;i++) y[c[i]]++;

  ll cnt=0;
  for(int i=0;i<n;i++){
    cnt+=x[b[i]]*y[i+1];
  }

  cout << cnt << endl;
}
