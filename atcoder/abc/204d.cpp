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
#include<cstring>
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

int n;
int a[110];

// DPテーブル
bool dp[110][100010];

int main() {
  cin >> n;
  for (int i = 0; i < n; ++i) cin >> a[i];
  int sum=0;
  for(int i=0;i<n;i++) sum+=a[i];

  memset(dp, 0, sizeof(dp));   // 一旦すべて false に
  dp[0][0] = true;             // dp[0][0] だけ true に
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= sum; ++j) {
      dp[i+1][j] |= dp[i][j];
      if (j >= a[i]) dp[i+1][j] |= dp[i][j-a[i]];
    }
  }

  int ans=sum;
  int tmp=sum;
  for(int i=0;i<=sum;i++){
    if(dp[n][i]){
      if(tmp>abs(2*i-sum)){
        ans=max(i,sum-i);
        tmp=abs(2*i-sum);
      }
    }
  }

  cout << ans << endl;
}
