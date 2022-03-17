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
    int count = 0;
    vector<vector<int> > ren;
    for (int v = 0; v < N; ++v) {
        if (dist[v] != -1) continue; // v が探索済みならスルー
        vector<int> tmp;
        dist[v] = 0, que.push(v);
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
        count++;
        ren.push_back(tmp);
    }

    ll sum=1;
    for(int i=0;i<ren.size();i++){
      ll var=3;
      int eda=0;
      for(int j=0;j<ren[i].size();j++){
        eda+=G[ren[i][j]].size();
      }
      if(eda==2*(ren[i].size()-1)){
        var*=(ll)pow(2,ren[i].size()-1);
      }else{
        int sub=(eda-2*(ren[i].size()-1))/2;
        if(sub<ren[i].size()-1){
          var*=(ll)pow(2,ren[i].size()-1-sub);
        }else{
          var=0;
        }
      }
      sum*=var;
    }
    cout << sum << endl;
    //cout << count << endl;
}
