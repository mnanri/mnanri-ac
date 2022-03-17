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
  vector<pair<double,double> > d(n);
  for(int i=0;i<n;i++) cin >> d[i].first >> d[i].second;

  double sum = 0.0;
  vector<double> c(n);
  for(int i=0;i<n;i++) {
    c[i] = (d[i].first*1.0)/(d[i].second*1.0);
    sum += c[i];
  }
  sum *= 0.5;

  double ans = 0.0;
  for(int i=0;i<n;i++){
    if(sum>c[i]) {
      sum -= c[i];
      ans += d[i].first;
    }else{
      ans += d[i].first*sum/c[i];
      break;
    }
  }
  cout << fixed << setprecision(8) << ans << endl;
}
