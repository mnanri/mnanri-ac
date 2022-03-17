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
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<ll> b(200,0);
  for(int i=0;i<n;i++){
    int tmp=a[i]%200;
    b[tmp]++;
  }

  ll sum=0;
  for(int i=0;i<200;i++){
    if(b[i]>0){
      ll tmp=b[i]*(b[i]-1)/2;
      sum+=tmp;
    }
  }

  cout << sum << endl;
}
