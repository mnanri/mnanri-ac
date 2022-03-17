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
  ll n;
  cin >> n;
  vector<ll> s(n);
  for(int i=0;i<n;i++) cin >> s[i];
  ll t;
  cin >> t;
  sort(s.begin(),s.end());

  for(int i=0;i<n;i++) s[i] /= t;
  ll tmp=s[0];
  ll ans=1;
  for(int i=0;i<n;i++){
    if(tmp!=s[i]){
      tmp=s[i];
      ans++;
    }
  }
  cout << ans << endl;
}
