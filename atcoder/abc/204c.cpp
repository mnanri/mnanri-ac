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

int main() {
    // 頂点数と辺数、s と t
    int N, M; cin >> N >> M;

    // グラフ入力受取
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        a--,b--;
        G[a].push_back(b);
    }

    // 頂点 s をスタートとした探索
    int ans=0;
    for(int i=0;i<N;i++){
      vector<int> dist(N, -1);
      queue<int> que;
      dist[i] = 0, que.push(i);
      while (!que.empty()) {
          int v = que.front(); que.pop();
          for (auto nv : G[v]) {
              if (dist[nv] == -1) {
                  dist[nv] = dist[v] + 1;
                  que.push(nv);
              }
          }
      }
      for(int i=0;i<N;i++){
        if(dist[i]!=-1) ans++;
      }
    }
    cout << ans << endl;
}
