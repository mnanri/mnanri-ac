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
  int h,w;
  cin >> h >> w;
  vector<string> c(h);
  for(int i=0;i<h;i++) cin >> c[i];
  ll tmp=h*w*(h*w+1);
  ll p=0,q=0;
  for(int i=1;i<h;i++){
    for(int j=1;j<w;j++){
      ll a,b,e,d;
      ll cnt=0;
      for(int l=0;l<i;l++){
        for(int k=0;k<j;k++){
          if(c[l][k]=='@'){
            cnt++;
          }
        }
      }
      a=(i*j)+(cnt*cnt);
      cnt=0;
      for(int l=0;l<i;l++){
        for(int k=j;k<w;k++){
          if(c[l][k]=='@'){
            cnt++;
          }
        }
      }
      b=(i*(w-j))+(cnt*cnt);
      cnt=0;
      for(int l=i;l<h;l++){
        for(int k=0;k<j;k++){
          if(c[l][k]=='@'){
            cnt++;
          }
        }
      }
      e=((h-i)*j)+(cnt*cnt);
      cnt=0;
      for(int l=i;l<h;l++){
        for(int k=j;k<w;k++){
          if(c[l][k]=='@'){
            cnt++;
          }
        }
      }
      d=((h-i)*(w-j))+(cnt*cnt);
      ll x=max(max(max(a,b),e),d);
      ll y=min(min(min(a,b),e),d);
      if(tmp>x-y){
        p=i,q=j;
        tmp=x-y;
      }
    }
  }
  cout << p << ' ' << q << endl;
}
