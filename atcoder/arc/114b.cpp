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
    int n;
    cin >> n;
    vector<int> f(n);
    for(int i=0;i<n;i++) cin >> f[i];
    for(int i=0;i<n;i++) f[i]--;

    vector<vector<int> > G(n);
    for(int i=0;i<;i++) G[f[i]].push_back(i);
    vector<int> dist(n, -1); // 全頂点を「未訪問」に初期化
    queue<int> que;
    vector<vector<int> > ren;

    for (int v = 0; v < n; ++v) {
        if (dist[v] != -1) continue; // v が探索済みならスルー
        dist[v] = 0, que.push(v);
        vector<int> tmp;
        while (!que.empty()) {
            int w = que.front(); 
            tmp.push_back(w);
            que.pop();
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