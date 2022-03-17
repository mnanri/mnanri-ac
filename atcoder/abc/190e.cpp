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
    // 頂点数と辺数
    int N, M; cin >> N >> M;

    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int k;
    cin >> k;
    vector<int> c(k);
    for(int i=0;i<k;i++) cin >> c[i];  

    // BFS 開始 (キューが空になるまで探索を行う)
    vector<int> dist(N, -1);
    queue<int> que;
    //int count = 0;
    vector<vector<int> > com;
    for (int v = 0; v < N; ++v) {
        if (dist[v] != -1) continue; // v が探索済みならスルー
        dist[v] = 0, que.push(v);
        vector<int> tmp;
        map<int,int> check;
        while (!que.empty()) {
            int w = que.front(); que.pop();
            tmp.push_back(w);
            check[w]=1;
            for (auto nv : G[v]) {
                if (dist[nv] == -1) {
                    dist[nv] = dist[w] + 1;
                    que.push(nv);
                }
            }
        }
        int suit=1;
        for(int i=0;i<k;i++){
            if(check.count(c[i])){
                continue;
            }else{
                suit=0;
                break;
            }
        }
        if(suit) com.push_back(tmp);
        //++count;
    }

    
}