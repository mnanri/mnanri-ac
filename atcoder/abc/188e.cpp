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
    // 頂点数と辺数
    int N, M; cin >> N >> M;

    vector<ll> a(N);
    for(int i=0;i<N;i++) cin >> a[i];

    // グラフ入力受取
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 頂点 s をスタートとした探索
    vector<int> dist(N, -1);
    queue<int> que;
    vector<vector<int> > cat;
    int count = 0;
    for (int v = 0; v < N; ++v) {
        if (dist[v] != -1) continue; // v が探索済みならスルー
        dist[v] = 0, que.push(v);

        vector<int> tmp;
        while (!que.empty()) {
            int w = que.front();
            tmp.push_back(w);
            que.pop();
            for (auto nv : G[w]) {
                if (dist[nv] == -1) {
                    dist[nv] = dist[v] + 1;
                    que.push(nv);
                }
            }
        }
        cat.push_back(tmp);
        ++count;
    }
    //cout << count << endl;

    /*for(int i=0;i<cat.size();i++){
        for(int j=0;j<cat[i].size();j++){
            cout << cat[i][j] << ' ';
        }
        cout << endl;
    }*/

    ll ans=0;
    for(int i=0;i<cat.size();i++){
        vector<ll> tmp;
        for(int j=0;j<cat[i].size();j++){
            tmp.push_back(a[cat[i][j]]);
        }
        sort(tmp.begin(),tmp.end());
        for(int j=0;j<tmp.size();j++) cout << tmp[j] << ' ';
        cout << endl;
        ll res=tmp[tmp.size()-1]-tmp[0];
        ans=max(ans,res);
    }

    cout << ans << endl;
}