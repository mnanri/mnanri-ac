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
  vector<pair<int,int> > m(n);
  vector<string> t(n);
  for(int i=0;i<n;i++){
    cin >> t[i];
    cin >> m[i].first;
    m[i].second=i;
  }
  sort(m.begin(),m.end());
  reverse(m.begin(),m.end());

  cout << t[m[1].second] << endl;
}
