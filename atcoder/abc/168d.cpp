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
    int n,m;
    cin >> n >> m;
    Graph G(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<pair<int,int> > dist(n);
    for(int i=0;i<n;i++){
        dist[i].first=-1;
        dist[i].second=0;
    }
    queue<int> que;
    dist[0].first=0;
    que.push(0);

    while(!que.empty()){
        int v=que.front();
        que.pop();

        for(int nv: G[v]){
            if(dist[nv].first!=-1) continue;
            dist[nv].first=dist[v].first+1;
            dist[nv].second=v+1;
            que.push(nv);
        }
    }
    //for(int i=0;i<n;i++) cout << dist[i].first << endl;

    for(int i=0;i<n;i++){
        if(dist[i].first==-1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    for(int i=1;i<n;i++) cout << dist[i].second << endl;
}