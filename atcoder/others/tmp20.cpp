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
  ll a,b,c;
  cin >> a >> b >> c;
  __int128_t d=1;
  for(int i=0;i<b;i++){
    d*=c;
  }

  if(a<d){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
