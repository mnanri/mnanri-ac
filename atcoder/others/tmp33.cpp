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
  int h,w;
  cin >> h >> w;
  if(h==1 || w==1){
    cout << h*w << endl;
  }else{
    cout << ((h+1)/2)*((w+1)/2) << endl;
  }
}
