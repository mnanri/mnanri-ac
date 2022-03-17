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
  int x,y;
  cin >> x >> y;
  vector<int> a(3,0);
  a[x]++,a[y]++;
  if(x==y){
    cout << x << endl;
  }else{
    for(int i=0;i<3;i++){
      if(a[i]==0){
        cout << i << endl;
        return 0;
      }
    }
  }
}
