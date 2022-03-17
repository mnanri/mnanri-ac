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
  ll n,k;
  cin >> n >> k;
  vector<ll> a(n),b(n);
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n;i++) cin >> b[i];

  ll sum=0;
  for(int i=0;i<n;i++) sum+=abs(a[i]-b[i]);

  if(k<sum){
    cout << "No" << endl;
  }else{
    if((sum-k)%2==0){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}
