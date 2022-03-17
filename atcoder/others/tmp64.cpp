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
  int n,q;
  cin >> n >> q;
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  vector<ll> b(n-1);
  ll sum=0;
  for(int i=0;i<n-1;i++) {
    b[i]=a[i]-a[i+1];
    sum+=abs(b[i]);
  }
  for(int i=0;i<q;i++){
    int l,r;
    ll v;
    cin >> l >> r >> v;
    l--,r--;
    if(l>0){
      sum-=abs(b[l-1]);
      b[l-1]-=v;
      sum+=abs(b[l-1]);
    }
    if(r<n-1){
      sum-=abs(b[r]);
      b[r]+=v;
      sum+=abs(b[r]);
    }

    cout << sum << endl;
  }
}
