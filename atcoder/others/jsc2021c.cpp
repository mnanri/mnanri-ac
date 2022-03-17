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
  int a,b;
  cin >> a >> b;
  vector<int> c(200001,0);
  for(int i=a;i<=b;i++){
    for(int j=1;j*j<=i;j++){
      if(i%j==0){
        c[j]++;
        if(i/j!=j) c[i/j]++;
      }
    }
  }

  for(int i=200000;i>=0;i--){
    if(c[i]>1){
      cout << i << endl;
      break;
    }
  }
}
