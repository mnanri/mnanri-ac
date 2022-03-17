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

vector<int> color(100001,0);
vector<int> check(100001,0);
void dfs(const Graph &G, int v, int p, const vector<int> &c) {
    if(color[c[v]]==0) check[v+1]=1;
    color[c[v]]++;
    for (auto nv : G[v]) {
        if (nv == p) continue; // nv が親 p だったらダメ
        dfs(G, nv, v, c); // v は新たに nv の親になります
    }
    color[c[v]]--;
}

int main() {
    // 頂点数 (木なので辺数は N-1 で確定)
    int N; cin >> N;
    vector<int> c(N);
    for(int i=0;i<N;i++) cin >> c[i];

    // グラフ入力受取
    Graph G(N);
    for (int i = 0; i < N-1; ++i) {
        int a, b;
        cin >> a >> b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 探索
    int root = 0; // 仮に頂点 0 を根とする
    dfs(G, root, -1, c);

    for(int i=0;i<N+1;i++){
        if(check[i]) cout << i << endl;
    }
}
