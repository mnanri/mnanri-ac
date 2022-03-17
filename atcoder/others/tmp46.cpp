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
  ll d=46;
  vector<ll> a(n),b(n),c(n);
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n;i++) cin >> b[i];
  for(int i=0;i<n;i++) cin >> c[i];

  for(int i=0;i<n;i++) a[i]%=d;
  for(int i=0;i<n;i++) b[i]%=d;
  for(int i=0;i<n;i++) c[i]%=d;

  vector<ll> x(d,0),y(d,0),z(d,0);
  for(int i=0;i<n;i++) x[a[i]]++;
  for(int i=0;i<n;i++) y[b[i]]++;
  for(int i=0;i<n;i++) z[c[i]]++;

  ll cnt=0;
  for(int i=0;i<d;i++){
    for(int j=0;j<d;j++){
      for(int k=0;k<d;k++){
        if((i+j+k)%d==0){
          cnt+=x[i]*y[j]*z[k];
        }
      }
    }
  }

  cout << cnt << endl;
}
