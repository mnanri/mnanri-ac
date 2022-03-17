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
  int n;
  string s;
  int q;
  cin >> n >> s >> q;

  string x,y;
  for(int i=0;i<n;i++) x.push_back(s[i]);
  for(int i=n;i<2*n;i++) y.push_back(s[i]);

  int flip=1;
  for(int i=0;i<q;i++){
    int t,a,b;
    cin >> t >> a >> b;

    if(flip){
      if(t==1){
        if(a<=n && b<=n){
          swap(x[a-1],x[b-1]);
        }else if(a<=n && b>n){
          char c=x[a-1];
          x[a-1]=y[b-n-1];
          y[b-n-1]=c;
        }else{
          swap(y[a-n-1],y[b-n-1]);
        }
      }else{
        flip=0;
      }
    }else{
      if(t==1){
        if(a<=n && b<=n){
          swap(y[a-1],y[b-1]);
        }else if(a<=n && b>n){
          char c=y[a-1];
          y[a-1]=x[b-n-1];
          x[b-n-1]=c;
        }else{
          swap(x[a-n-1],x[b-n-1]);
        }
      }else{
        flip=1;
      }
    }
  }

  if(flip){
    cout << x+y << endl;
  }else{
    cout << y+x << endl;
  }
}
