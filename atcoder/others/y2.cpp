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

int main(){
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  int q;
  cin >> q;
  for(int i=0;i<q;i++){
    int query;
    cin >> query;
    if(query==1){
      int index,value;
      cin >> index >> value;
      index--;
      a[index]=value;
    }else{
      int l,r,s,t;
      cin >> l >> r >> s >> t;
      l--,r--;
      int cnt=0;
      for(int j=l;j<=r;j++){
        if(a[j]>=s && a[j]<=t) cnt++;
      }
      cout << cnt << endl;
    }
  }
}
