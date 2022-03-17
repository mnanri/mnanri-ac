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
  for(int i=0;i<n;i++){
    int t;
    cin >> t >> d[i].first >> d[i].second;
    if(t==2) d[i].second-=0.01;
    if(t==3) d[i].first+=0.01;
    if(t==4) d[i].first+=0.01,d[i].second-=0.01;
  }

  int cnt=0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++) if(d[i].first <= d[j].second && d[i].second >= d[j].second || d[j].first <= d[i].second && d[j].second >= d[i].second || d[i].first <= d[j].first && d[i].second >= d[j].second || d[j].first <= d[i].first && d[j].second >= d[i].second) cnt++;
  }

  cout << cnt << endl;
}
