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
  ll l,r;
  cin >> l >> r;
  ll Lma=1;
  ll Lketa=0;
  while(Lma<=l){
    Lma*=(ll)10;
    Lketa++;
  }
  ll Rma=1;
  ll Rketa=0;
  while(Rma<=r){
    Rma*=(ll)10;
    Rketa++;
  }
  cout << Lma << ' ' << Rma << endl;
  cout << Lketa << ' ' << Rketa << endl;
  if(Lketa==Rketa){
    ll cnt=(r-l+1);
    ll sum=(cnt*((r+l))/2)%M;
    cout << (sum*Lketa)%M << endl;
    return 0;
  }
  ll Lcnt=(Lma-l);
  ll Lsum=(Lcnt*((l+Lma-1))/2)%M;
  ll ans=(Lketa*Lsum)%M;
  //cout << ans << endl;
  for(ll i=Lketa+1;i<Rketa;i++){
    ll cnt=(Lma*(ll)9);
    ll sum=(cnt*((Lma*(ll)11-1))/2)%M;
    ans+=((i*sum)%M);
    Lma*=(ll)10;
  }
  //cout << ans << endl;
  Rma/=10;
  cout << Rma << endl;
  ll Rcnt=(r-Rma+1);
  ll Rsum=(Rcnt*((r+Rma))/2)%M;
  ans+=((Rsum*Rketa)%M);

  cout << ans << endl;
}
