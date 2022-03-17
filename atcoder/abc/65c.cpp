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
    ll n,m;
    cin >> n >> m;
    if(abs(n-m)>1){
        cout << 0 << endl;
        return 0;
    }
    if(n==m){
        ll ans=2;
        for(ll i=1;i<=n;i++) ans=(ans*i)%M;
        for(ll i=1;i<=m;i++) ans=(ans*i)%M;
        cout << ans << endl;
    }else{
        ll ans=1;
        for(ll i=1;i<=m;i++) ans=(ans*i)%M;
        for(ll i=1;i<=n;i++) ans=(ans*i)%M;
        cout << ans << endl;
    }

}