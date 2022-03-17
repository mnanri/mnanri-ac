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
    ll n,x,m;
    cin >> n >> x >> m;
    vector<int> rec(m,-1);
    vector<int> rp;
    int cnt=0;
    ll val=0;
    while(rec[x]==-1){
        rp.push_back(x);
        rec[x]=cnt;
        cnt++;
        val+=x;
        x=(x*x)%m;
    }

    int len=cnt-rec[x];
    ll rp_val=0;
    for(int i=rec[x];i<rec[x]+len;i++) rp_val+=rp[i];

    ll ans=0;
    if(n<=cnt){
        for(int i=0;i<n;i++) ans+=rp[i];
    }else{
        ans+=val;
        n-=cnt;
        ans+=rp_val*(n/len);
        n%=len;
        for(int i=0;i<n;i++) ans+=rp[rec[x]+i];
    }
    cout << ans << endl;
}