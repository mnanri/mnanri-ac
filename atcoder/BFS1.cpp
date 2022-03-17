#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int> >;

// sからtにたどりつけるか
// https://qiita.com/drken/items/996d80bcae64649a6580#3-1-s-から-t-へ辿り着けるか
int main() {
  // 頂点数と辺数、s と t
  int N, M, s, t; cin >> N >> M >> s >> t;

  // グラフ入力受取
  Graph G(N);
  for (int i=0;i<M;i++) {
    int a, b;
    cin >> a >> b;
    a--,b--;
    G[a].push_back(b);
    G[b].push_back(a); // 有向グラフならば不要
  }

  // 頂点 s をスタートとした探索
  vector<int> dist(N, -1);
  queue<int> que;
  dist[s] = 0, que.push(s);
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

  // t に辿り着けるかどうか
  if (dist[t] != -1) cout << "Yes" << endl;
  else cout << "No" << endl;
}
