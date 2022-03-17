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
  int n,x;
  cin >> n >> x;
  vector<vector<ll> > t(n,vector<ll>(4));
  for(int i=0;i<n;i++) cin >> t[i][0] >> t[i][1] >> t[i][2] >> t[i][3];

  vector<ll> high(x+1,0);
  vector<ll> low(x+1,5000*x);

  for(int i=0;i<n;i++){
    ll tmp=t[i][1];
    for(int j=1;j<x+1;j++){
      if(j>=t[i][0]){
        if((j-t[i][0])%t[i][2]==0){
          tmp+=t[i][3];
        }
      }
      high[j]=max(high[j],tmp);
      low[j]=min(low[j],tmp);
    }
  }
  cout << low[x] << ' ' << high[x] << endl;
}
