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
#include <numeric>
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

#define rep(i,n) for(int i=0;i<n;i++)

const int A = 1000005;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(A);
  
  rep(i,n){
    cin >> a[i];
    ++b[a[i]];
  }
  
  bool ispw = true;
  //pairwise coprimeの判定
  for(int i=2; i<A; ++i){
    int cnt = 0;
    for(int j=i; j<A; j+=i){ //倍数の存在チェック
      cnt += b[j];
    }
    if(cnt < 2) continue;
    ispw = false;
    break;
  }
  
  if(ispw){
    cout << "pairwise coprime" << endl;
    return 0;
  }
  
  //setwise coprimeの判定
  int g = 0;
  rep(i,n) g = gcd(g,a[i]);
  if(g == 1){
    cout << "setwise coprime" << endl;
    return 0;
  }
  
  cout << "not coprime" << endl;
  
  return 0;
}
