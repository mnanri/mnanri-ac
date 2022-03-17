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
    vector<pair<int,int> > reg(m);
    for(int i=0;i<m;i++) cin >> reg[i].first >> reg[i].second;
    int k;
    cin >> k;
    vector<pair<int,int> > can(k);
    for(int i=0;i<k;i++) cin >> can[i].first >> can[i].second;

    int ans=0;
    vector<int> put(n+1);
    for(int tmp=0; tmp<(1<<16); tmp++){
        bitset<16> s(tmp);
        put.assign(n+1,0);
        for(int i=0;i<k;i++){
            if(s.test(i)){
                put[can[i].first]=1;
            }else{
                put[can[i].second]=1;
            }
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            if(put[reg[i].first] && put[reg[i].second]) cnt++;
        }
        ans=max(ans,cnt);
    }

    cout << ans << endl;
}