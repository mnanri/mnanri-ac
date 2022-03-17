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
  int n,x;
  cin >> n >> x;
  int sum=0;
  for(int i=0;i<n;i++){
    int b;
    cin >> b;
    if(i%2==0){
      sum+=b;
    }else{
      sum+=b;
      sum--;
    }
  }
  if(sum<=x){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
