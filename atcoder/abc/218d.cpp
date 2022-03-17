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
  vector<pair<int,int> > c(n);
  for(int i=0;i<n;i++) cin >> c[i].first >> c[i].second;
  sort(c.begin(),c.end());

  vector<vector<int> > a;
  int tmp=c[0].first;
  vector<int> b;
  for(int i=0;i<n;i++){
    if(tmp==c[i].first){
      b.push_back(c[i].second);
    }else{
      a.push_back(b);
      b.clear();
      tmp=c[i].first;
      b.push_back(c[i].second);
    }
  }
  a.push_back(b);

  ll sum=0;
  int g=a.size();
  for(int i=0;i<g-1;i++){
    if(a[i].size()<2) continue;
    map<int,int> x;
    for(int k=0;k<a[i].size();k++) x[a[i][k]]=1;
    for(int j=i+1;j<g;j++){
      if(a[j].size()<2) continue;
      ll cnt=0;
      for(int l=0;l<a[j].size();l++){
        if(x.count(a[j][l])) cnt++;
      }
      sum+=(cnt*(cnt-1)/2);
    }
  }

  /*for(int i=0;i<g;i++){
    for(int j=0;j<a[i].size();j++) cout << a[i][j] << ' ';
    cout << endl;
  }*/

  cout << sum << endl;
}
