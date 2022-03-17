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
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
    int n,m;
    cin >> n >> m;
    ll a[n],b[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    ll c[n];
    for(int i=0;i<n;i++) c[i]=b[i]-a[i];
    /*ll pro=0;
    for(int i=0;i<n;i++) pro+=c[i];
    if(pro!=0){
        cout << "No" << endl;
        return 0;
    }*/
    if(n==1){
        if(c[0]==0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        return 0;
    }

    Graph G(n);
    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> dist(n, -1);
    queue<int> que;
    vector<vector<int> > group;

    for (int v=0;v<n;++v) {
        if (dist[v] != -1) continue; // v が探索済みならスルー
        dist[v] = 0, que.push(v);
        vector<int> aset;
        while (!que.empty()) {
            int w = que.front(); que.pop();
            aset.push_back(w);
            for (auto nv : G[w]) {
                if (dist[nv] == -1) {
                    dist[nv] = dist[w] + 1;
                    que.push(nv);
                }
            }
        }
        //for(int i=0;i<aset.size();i++) cout << aset.at(i) << ' ';
        //cout << endl;
        group.push_back(aset);
    }

    for(int i=0;i<group.size();i++){
        ll tmp=0;
        for(int j=0;j<group.at(i).size();j++){
            tmp+=c[group.at(i).at(j)];
        }
        if(tmp!=0){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}