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
  ll a,b,c;
  cin >> a >> b >> c;
  ll x=b-a, y=c-b;
  if(x==y){
    cout << 0 << endl;
  }else if(x>y){
    cout << abs(x-y) << endl;
  }else{
    ll d=a-c;
    if(d%2==0){
      ll tmp=a-d/2;
      cout << tmp-b << endl;
    }else{
      if(d>0){
        d++;
      }else{
        d--;
      }
      ll tmp=a-d/2;
      //cout << tmp << ' ' << d << endl;
      cout << tmp-b+1 << endl;
    }
  }
}
