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
  vector<ll> t(n);
  vector<vector<int> > a;
  for(int i=0;i<n;i++){
    cin >> t[i];
    int k;
    cin >> k;
    vector<int> b(k);
    for(int j=0;j<k;j++) {
      cin >> b[j];
      b[j]--;
    }
    a.push_back(b);
  }

  Graph G(n);
  for (int i=0;i<n;i++) {
    for(int j=0;j<a[i].size();j++) G[i].push_back(a[i][j]);
    //G[b].push_back(a); // 有向グラフならば不要
  }

  // 頂点 s をスタートとした探索
  vector<int> dist(n,-1);
  queue<int> que;
  dist[n-1]=0, que.push(n-1);
  while (!que.empty()) {
    int v = que.front(); que.pop();
    for (int i=0;i<G[v].size();i++) {
      int nv = G[v][i];
      if (dist[nv] == -1) {
        dist[nv] = dist[v] + 1;
        que.push(nv);
      }
    }
  }

  ll sum = 0;
  for(int i=0;i<n;i++){
    if(dist[i]!=-1) sum += t[i];
  }
  cout << sum << endl;
}
