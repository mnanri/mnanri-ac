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
  ll a,b,c;
  cin >> a >> b >> c;
  ll d=gcd(a,b);
  d=gcd(c,d);

  cout << a/d+b/d+c/d-3 << endl;
}
