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
  int n;
  cin >> n;
  int A=0,B=1001;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    A=max(A,a);
  }
  for(int i=0;i<n;i++){
    int b;
    cin >> b;
    B=min(B,b);
  }

  if(A>B){
    cout << 0 << endl;
  }else{
    cout << B-A+1 << endl;
  }
}
