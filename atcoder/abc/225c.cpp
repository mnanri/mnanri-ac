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
  vector<vector<ll> > b(n,vector<ll>(m)) ;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++) cin >> b[i][j];
  }

  ll c=0;
  for(int i=1;i<=7;i++){
    if((b[0][0]-i)%7==0){
      c=i;
      break;
    }
  }
  if(c+m>8){
    cout << "No" << endl;
    return 0;
  }

  for(int i=0;i<n;i++){
    ll tmp=b[i][0];
    if((b[i][0]-c)%7!=0){
      cout << "No" << endl;
      return 0;
    }
    for(int j=0;j<m;j++){
      if(b[i][j]!=tmp+j){
        cout << "No" << endl;
        return 0;
      }
    }
  }

  ll l=(b[0][0]-c)/7;
  for(int i=0;i<n;i++){
    if((b[i][0]-c)/7!=l+i){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
