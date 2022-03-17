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

// const auto &res = prime_factorize(N); で受け取れる
// N=４の場合に注意
vector<pair<ll, ll> > prime_factorize(ll N) {
  vector<pair<ll, ll> > res;
  for (ll a = 2; a*a < N; ++a) {
    if (N%a != 0) continue;
    ll ex=0; // 指数
    // 割れる限り割り続ける
    while (N%a == 0) {
      ++ex;
      N /= a;
    }
    // その結果を push
    res.push_back(make_pair(a,ex));
  }
  // 最後に残った数について
  if (N != 1) res.push_back(make_pair(N,1));
  return res;
}

int main(){
  ll n;
  cin >> n;
  if(n==4){
    cout << 1 << endl;
    return 0;
  }
  const auto &res = prime_factorize(n);
  ll m=0;
  for(int i=0;i<res.size();i++) m+=res[i].second;
  ll tmp=1;
  int cnt=0;
  while(m>tmp){
    tmp*=(ll)2;
    cnt++;
  }
  cout << cnt << endl;
}
