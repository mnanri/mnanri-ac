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
  int n;
  cin >> n;
  vector<int> c(n,1);
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    a--;
    if(c[a]){
      c[a]=0;
    }else{
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
