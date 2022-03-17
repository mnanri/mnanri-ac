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
  ll n,k;
  cin >> n >> k;
  ll m=n*3;

  ll var=0;
  ll kep=0;
  ll res=0;
  for(ll i=3;i<=m;i++){
    ll tmp;
    if(i<=n+2){
      tmp=(i-1)*(i-2)/2;
    }else if(i<=2*n+1){
      ll pre=i-n;
      tmp=(i-1)*(i-2)/2-3*(pre-1)*(pre-2)/2;
    }else{
      tmp=3*(i-n-1);
    }
    var+=tmp;
    if(var>=k){
      res=k-var+tmp;
      kep=i;
      break;
    }
  }
  cout << k-var << endl;
  //cout << kep << ' ' << res << endl;
  if(kep<=n+2){
    ll sum=0;
    for(int i=1;i<=kep-2;i++){
      sum+=kep-i-1;
      if(sum>=res){
        ll cat=sum-res;
        cout << i << ' ' << kep-i-1-cat << ' ' << cat+1 << endl;
        break;
      }
    }
  }else if(kep<=2*n){
    ll
  }else{
    if(res<=2*(kep-n-1)){
      if(res%2==1){
        ll tmp=res/2+1;
        cout << tmp << ' ' << kep-n-tmp << ' ' << n << endl;
      }else{
        ll tmp=res/2;
        cout << tmp << ' ' << n << ' ' << kep-n-tmp << endl;
      }
    }else{
      ll tmp=res-2+(kep-n-1);
      cout << n << ' ' << tmp << ' ' << kep-n-tmp << endl;
    }
  }
}
