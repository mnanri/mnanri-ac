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
  int n;
  cin >> n;
  vector<int> a;
  while(n/10 != 0){
    a.push_back(n%10);
    n/=10;
  }
  a.push_back(n);
  int m = a.size();
  sort(a.begin(),a.end());
  ll ans=0;
  do{
    for(int i=0;i<m-1;i++){
      ll x=0,y=0;
      for(int j=0;j<i+1;j++){
        if(a[0]==0) break;
        if(x==0){
          x=a[j];
        }else{
          x*=10;
          x+=a[j];
        }
      }
      for(int j=i+1;j<m;j++){
        if(y==0){
          y=a[j];
        }else{
          y*=10;
          y+=a[j];
        }
      }
      ans=max(ans,x*y);
    }
  }while(next_permutation(a.begin(),a.end()));

  cout << ans << endl;
}
