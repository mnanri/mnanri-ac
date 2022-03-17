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
//const ll M = 1000000007;

int main(){
  // N:SNSの登録者総数,M:繋がりの総数
  int N, M; cin >> N >> M;

  // グラフ入力受取
  // a,b:繋がっているユーザ同士のid的なもの
  Graph G(N);
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    a--,b--;
    G[a].push_back(b);
    G[b].push_back(a); // 有向グラフならば不要
  }

  // s,t:つながりを確かめたいユーザのid
  int s,t;
  cin >> s >> t;

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
