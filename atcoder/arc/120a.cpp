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
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  ll sum=0;
  vector<ll> s(n);
  for(int i=0;i<n;i++){
    sum+=a[i];
    s[i]=sum;
  }
  vector<ll> ss(n);
  ll ssum=0;
  for(int i=0;i<n;i++){
    ssum+=s[i];
    ss[i]=ssum;
  }

  ll tmp=a[0];
  ll ans=0;
  cout << 2*a[0] << endl;
  for(int i=1;i<n;i++){
    tmp=max(tmp,a[i]);
    ll x=tmp*(i+1);
    //cout << s[i] << ' ' << ss[i-1] << ' ' << x << endl;
    cout << s[i]+ss[i-1]+x << endl;
  }
}
