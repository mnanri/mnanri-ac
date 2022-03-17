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

int main(){
    int N;
    cin >> N;
    
    Graph G(N);
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 頂点 s をスタートとした探索
    vector<int> dist(N, -1);
    queue<int> que;
    vector<vector<int> > ren;

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
        ren.push_back(tmp);
    }
}