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
  int p;
  cin >> p;
  vector<int> c(10);
  int f=1;
  for(int i=0;i<10;i++){
    f*=(i+1);
    c[9-i]=f;
  }
  int cnt=0;
  for(int i=0;i<10;i++){
    int tmp=p/c[i];
    cnt+=tmp;
    p-=(tmp*c[i]);
  }
  cout << cnt << endl;
}
