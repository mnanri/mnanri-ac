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
  vector<int> a(n);
  for(int i=0;i<n;i++) {
    cin >> a[i];
    a[i]--;
  }
  vector<pair<int,int> > b;
  for(int i=0;i<n/2;i++){
    int x=a[i],y=a[n-1-i];
    if(x!=y){
      if(y>x) swap(x,y);
      b.push_back(make_pair(x,y));
    }
  }
  sort(b.begin(),b.end());
  if(b.size()==0){
    cout << 0 << endl;
    return 0;
  }
  Graph G(200000);
  int p=b[0].first, q=b[0].second;
  G[p].push_back(q);
  G[q].push_back(p);
  for(int i=0;i<b.size();i++){
    if(p!=b[i].first || q!=b[i].second){
      p=b[i].first;
      q=b[i].second;
      G[p].push_back(q);
      G[q].push_back(p);
    }
  }

  vector<int> dist(200000, -1);
  queue<int> que;
  int count = 0;
  vector<vector<int> > connect;
  for (int v = 0; v < 200000; ++v) {
    if (dist[v] != -1) continue; // v が探索済みならスルー
    dist[v] = 0, que.push(v);
    vector<int> tmp;
    while (!que.empty()) {
      int w = que.front(); que.pop();
      tmp.push_back(w);
      for (auto nv : G[w]) {
        if (dist[nv] == -1) {
          dist[nv] = dist[w] + 1;
          que.push(nv);
        }
      }
    }
    connect.push_back(tmp);
    ++count;
  }
  int ans=0;
  for(int i=0;i<count;i++){
    ans+=(connect[i].size()-1);
  }
  cout << ans << endl;
}
