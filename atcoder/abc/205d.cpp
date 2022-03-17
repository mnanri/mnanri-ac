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
  int n,q;
  cin >> n >> q;
  ll a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  sort(a,a+n);
  ll b[n];
  b[0]=a[0]-1;
  for(int i=1;i<n;i++) b[i]=a[i]-a[i-1]-1;
  ll c[n];
  ll sum=0;
  for(int i=0;i<n;i++){
    sum+=b[i];
    c[i]=sum;
  }

  for(int i=0;i<q;i++){
    ll k;
    cin >> k;
    if(k>sum){
      cout << a[n-1]+(k-sum) << endl;
    }else{
      ll x=lower_bound(c,c+n,k)-c;
      if(x==0){
        cout << k << endl;
      }else{
        cout << a[x]-(c[x]-k)-1 << endl;
      }
    }
  }
}
