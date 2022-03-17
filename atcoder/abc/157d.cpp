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
using intl = int64_t;
using graph = vector<vector<int> >;
int main(){
    int n,m,k;
    cin >> n >> m >> k;

    graph friends(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        friends[a-1].push_back(b-1);
        friends[b-1].push_back(a-1);
    }

    map<int,vector<int> > block(n);
    for(int i=0;i<k;i++){
        int c,d;
        cin >> c >> d;
        block[c-1].push_back(d-1);
        block[d-1].push_back(c-1);
    }

    int cand[n];
    for(int i=0;i<n;i++) cand[i]=0;
    for(int i=0;i<n;i++){
        vector<int> dist(n,-1);
        queue<int> que;
        
        dist[i]=0;
        que.push(0);

        while(!que.empty()){
            int v = que.front();
            que.pop();

            for(int nv:friends[v]){
                if(dist[nv]!=-1) continue;

                dist[nv] = dist[v]+1;
                que.push(nv);
            }
        }

        
    }
}