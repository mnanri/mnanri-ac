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
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  map<ll,vector<int> > mp;
  for(int i=0;i<n;i++) mp[a[i]].push_back(i+1);

  for(int i=0;i<q;i++){
    ll x;
    int k;
    cin >> x >> k;
    if(mp.count(x)){
      if(k>mp.at(x).size()){
        cout << -1 << endl;
      }else{
        cout << mp.at(x).at(k-1) << endl;
      }
    }else{
      cout << -1 << endl;
    }
  }
}
