#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

// 無向グラフの連結成分の個数
// https://qiita.com/drken/items/996d80bcae64649a6580#3-2-連結成分の個数
int main() {
  // 頂点数と辺数
  int N, M; cin >> N >> M;

  // グラフ入力受取
  Graph G(N);
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    a--,b--;
    G[a].push_back(b);
    G[b].push_back(a); // 有向グラフならば不要
  }

  // 頂点 s をスタートとした探索
  vector<int> dist(N, -1);
  queue<int> que;
  int count = 0;
  vector<vector<int> > connect;
  for (int v = 0; v < N; ++v) {
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
  //cout << count << endl;
}
