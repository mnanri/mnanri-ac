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
  int n,x;
  cin >> n >> x;
  vector<int> a(n),b(n),c(n);
  int sum = 0;
  for(int i=0;i<n;i++){
    cin >> a[i] >> b[i];
    if(a[i]>b[i]) swap(a[i],b[i]);
    sum += a[i];
    c[i] = b[i] - a[i];
  }

  if(sum>x){
    cout << "No" << endl;
    return 0;
  }

  x -= sum;
  vector<vector<bool> > dp(n + 1, vector<bool>(x + 1, false));
  for(int i=0;i<n+1;i++) dp[i][0] = true;

  for(int i=0;i<n;i++){
    for(int j=0;j<x+1;j++){
      if(j - c[i] >= 0) dp[i + 1][j] = dp[i + 1][j] | dp[i][j - c[i]];
      dp[i + 1][j] = dp[i + 1][j] | dp[i][j];
    }
  }

  if(dp[n][x]) {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
