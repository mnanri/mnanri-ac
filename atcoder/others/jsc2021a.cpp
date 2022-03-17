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
  double x,y,z;
  cin >> x >> y >> z;
  double a=y*z/x;
  int b=floor(a);
  if(b*1.0==a){
    cout << b-1 << endl;
  }else{
    cout << b << endl;
  }
}
