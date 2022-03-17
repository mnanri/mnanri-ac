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
  vector<vector<ll> > a(n,vector<ll>(6));
  for(int i=0;i<n;i++){
    for(int j=0;j<6;j++) cin >> a[i][j];
  }

  vector<ll> s(n,(ll)0);
  for(int i=0;i<n;i++){
    for(int j=0;j<6;j++) s[i]+=a[i][j];
  }

  ll ans=1;
  for(int i=0;i<n;i++){
    ans*=s[i];
    ans%=M;
  }

  cout << ans << endl;
}
