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
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n;i++) cin >> b[i];

  sort(a.begin(),a.end());
  sort(b.begin(),b.end());

  ll sum=0;
  for(int i=0;i<n;i++) sum+=abs(a[i]-b[i]);

  cout << sum << endl;
}
