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
  vector<pair<ll,ll> > x(n),y(n);
  for(int i=0;i<n;i++) {
    cin >> x[i].first >> y[i].first;
    x[i].second=i,y[i].second=i;
  }

  sort(x.begin(),x.end());
  sort(y.begin(),y.end());

  vector<pair<ll,pair<int,int> > > a(6);
  a[0].first=x[n-1].first-x[0].first;
  a[1].first=x[n-1].first-x[1].first;
  a[2].first=x[n-2].first-x[0].first;
  a[3].first=y[n-1].first-y[0].first;
  a[4].first=y[n-1].first-y[1].first;
  a[5].first=y[n-2].first-y[0].first;
  a[0].second=make_pair(x[n-1].second,x[0].second);
  a[1].second=make_pair(x[n-1].second,x[1].second);
  a[2].second=make_pair(x[n-2].second,x[0].second);
  a[3].second=make_pair(y[n-1].second,y[0].second);
  a[4].second=make_pair(x[n-1].second,x[1].second);
  a[5].second=make_pair(x[n-2].second,x[0].second);

  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());

  if(a[0].second==a[1].second){
    cout << a[2].first << endl;
  }else{
    cout << a[1].first << endl;
  }
}
