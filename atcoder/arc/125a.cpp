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
  vector<int> s(n),t(m);
  for(int i=0;i<n;i++) cin >> s[i];
  for(int i=0;i<m;i++) cin >> t[i];
  int x=s[0];
  int q=-1;
  int r=n;
  for(int i=0;i<n;i++){
    if(s[i]!=x){
      q=i;
      break;
    }
  }
  for(int i=0;i<n;i++){
    if(s[n-1-i]!=x){
      r=i+1;
      break;
    }
  }
  if(q==-1){
    for(int i=0;i<m;i++){
      if(x!=t[i]){
        cout << -1 << endl;
        return 0;
      }
    }
    cout << m << endl;
    return 0;
  }
  int d=min(q,r);
  int ans=0;
  int check=1;
  for(int i=0;i<m;i++){
    if(x!=t[i]){
      if(check){
        ans+=d;
        x=t[i];
        check=0;
      }else{
        x=t[i];
        ans++;
      }
    }
    ans++;
  }
  cout << ans << endl;
}
