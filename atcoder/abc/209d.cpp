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
  int N,Q; cin >> N >> Q;

  // グラフ入力受取
  Graph G(N);
  for (int i = 0; i < N-1; ++i) {
    int a, b;
    cin >> a >> b;
    a--,b--;
    G[a].push_back(b);
    G[b].push_back(a); // 有向グラフならば不要
  }

  // 頂点 s をスタートとした探索
  vector<int> dist(N, -1);
  queue<int> que;
  dist[0] = 0, que.push(0);
  while (!que.empty()) {
    int v = que.front(); que.pop();
    for (auto nv : G[v]) {
      if (dist[nv] == -1) {
          dist[nv] = dist[v] + 1;
          que.push(nv);
      }
    }
  }

  for(int i=0;i<Q;i++){
    int c,d;
    cin >> c >> d;
    c--,d--;
    if(abs(dist[c]-dist[d])%2==0){
      cout << "Town" << endl;
    }else{
      cout << "Road" << endl;
    }
  }
}
