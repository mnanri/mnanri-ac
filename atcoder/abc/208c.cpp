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
  ll n,k;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  vector<ll> b(n);
  for(int i=0;i<n;i++) b[i]=a[i];
  sort(b.begin(),b.end());
  ll v=k/n;
  k-=(v*n);
  map<ll,ll> x;
  for(int i=0;i<k;i++){
    x[b[i]]=1;
  }
  for(int i=0;i<n;i++){
    if(x.count(a[i])){
      cout << v+1 << endl;
    }else{
      cout << v << endl;
    }
  }
}
