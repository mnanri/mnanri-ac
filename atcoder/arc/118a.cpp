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
  int t;
  ll n;
  cin >> t >> n;

  if((100*n)%t==0){
    cout << 100*n/t + n-1 << endl;
  }else{
    cout << 100*n/t + n << endl;
  }
}
