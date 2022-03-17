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
  int n,m;
  cin >> n >> m;
  //vector<int> a(n),b(m);
  vector<int> c(1001,0);
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    c[a]++;
  }

  for(int i=0;i<m;i++){
    int b;
    cin >> b;
    c[b]--;
  }

  for(int i=0;i<1001;i++){
    if(c[i]) cout << i << ' ';
  }
  cout << endl;
}
