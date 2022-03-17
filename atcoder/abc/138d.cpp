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

// 木上の探索
vector<ll> subtree_size;
void dfs(const Graph &G, vector<ll> &x ,int v, int p) {
    subtree_size[v]+=x[v];
    for (auto nv : G[v]) {
        if (nv == p) continue; // nv が親 p だったらダメ
        subtree_size[nv]+=subtree_size[v];
        dfs(G, x, nv, v);
    }
}

int main() {
    // 頂点数 (木なので辺数は N-1 で確定)
    int N,Q; cin >> N >> Q;

    // グラフ入力受取
    Graph G(N);
    for (int i = 0; i < N-1; ++i) {
        int a, b;
        cin >> a >> b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<ll> x(N,0);
    for(int i=0;i<Q;i++){
        int p;
        ll y;
        cin >> p >> y;
        p--;
        x[p]+=y;
    }

    // 探索
    int root = 0; // 仮に頂点 0 を根とする
    subtree_size.assign(N, 0);
    dfs(G, x, root, -1);

    for(int i=0;i<N;i++) cout << subtree_size[i] << ' ';
    cout << endl;
}