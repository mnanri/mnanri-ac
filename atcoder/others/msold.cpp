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
  cin >> n;
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<int> b(n-1,0);
  for(int i=0;i<n-1;i++){
    if(a[i]<a[i+1]){
      b[i]=1;
    }else if(a[i]>a[i+1]){
      b[i]=-1;
    }
  }

  ll m=1000;
  ll c=0;
  int s=1;
  for(int i=0;i<n-1;i++){
    if(i==0){
      if(b[i]>0){
        ll tmp=m/a[i];
        m-=a[i]*tmp;
        c=tmp;
      }else{
        s=-1;
      }
    }else{
      if(s==1){
        if(b[i]>=0){
          continue;
        }else{
          m+=a[i]*c;
          c=0;
          s=-1;
        }
      }else{
        if(b[i]<=0){
          continue;
        }else{
          ll tmp=m/a[i];
          m-=a[i]*tmp;
          c=tmp;
          s=1;
        }
      }
    }
    //cout << m << ' ' << c << endl;
  }

  cout << m+a[n-1]*c << endl;
}
