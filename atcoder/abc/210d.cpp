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
  // 頂点数と辺数、s と t
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
  vector<int> cnt(N,0);
  queue<int> que;
  dist[0] = 0, que.push(0);
  cnt[0]++;
  while (!que.empty()) {
    int v = que.front(); que.pop();
    for (auto nv : G[v]) {
      if (dist[nv] == -1) {
        dist[nv] = dist[v] + 1;
        que.push(nv);
        cnt[nv]=cnt[v];
      }else if(dist[nv] == dist[v] + 1){
        cnt[nv]+=cnt[v];
        cnt[nv]%=M;
      }
    }
  }

  cout << cnt[N-1] << endl;
}
