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
  int a,b,c;
  cin >> a >> b >> c;
  if(a==b){
    cout << c << endl;
  }else if(b==c){
    cout << a << endl;
  }else if(c==a){
    cout << b << endl;
  }else{
    cout << 0 << endl;
  }
}
