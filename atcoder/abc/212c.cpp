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
  int n,m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<m;i++) cin >> b[i];
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  int ans=M;
  for(int i=0;i<n;i++){
    if(a[i]<=b[m-1]){
      auto ite=lower_bound(b.begin(),b.end(),a[i]);
      int id=ite-b.begin();
      ans=min(ans,abs(b[id]-a[i]));
      if(id>0) ans=min(ans,abs(b[id-1]-a[i]));
    }else{
      ans=min(ans,a[i]-b[m-1]);
    }
  }
  cout << ans << endl;
}
