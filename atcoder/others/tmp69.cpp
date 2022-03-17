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

ll RepeatSquaring(ll N, ll P){ //N^P(modM)
  if(P==0) return 1;
  if(P%2==0){
    ll t = RepeatSquaring(N, P/2) % M;
    return t*t % M;
  }
  return N * RepeatSquaring(N, P-1) % M;
}

int main(){
  ll n,k;
  cin >> n >> k;
  if(n==1){
    cout << k << endl;
  }else if(n==2){
    cout << (k * (k-1)) % M << endl;
  }else{
    if(k>2){
      ll rep = RepeatSquaring(k-2,n-2);
      //cout << rep << endl;
      ll tmp = (k * (k-1)) % M;
      cout << (tmp * rep) % M << endl;
    }else{
      cout << 0 << endl;
    }
  }
}
