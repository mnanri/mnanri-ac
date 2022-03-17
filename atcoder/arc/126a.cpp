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
  int t;
  cin >> t;
  for(int i=0;i<t;i++){
    ll a,b,c;
    cin >> a >> c >> b;
    c/=2;
    if(b>=c){
      ll sum=c;
      b-=c;
      if(b>=a/3){
        cout << sum+a/3 << endl;
      }else{
        a-=3*b;
        cout << b+a/5;
      }
    }else{
      ll sum=b;
      c-=b;
      if(c>=a/2){
        cout << sum+a/2 << endl;
      }else{
        a-=2*c;
        cout << c+a/5 << endl;
      }
    }
  }
}
