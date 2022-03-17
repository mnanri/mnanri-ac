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

// 競プロ典型問題42日目
// https://atcoder.jp/contests/typical90/tasks/typical90_ap
int main(){
  ll k;
  cin >> k;
  if(k%9!=0){
    cout << 0 << endl;
    return 0;
  }
  vector<ll> dp(k+1);
  dp[0]=1;
  for(int i=0;i<=k;i++){
    for(int j=i-1;j>=i-9 && j>=0;j--){
      dp[i]+=dp[j];
      dp[i]%=M;
    }
  }
  cout << dp[k] << endl;
}
