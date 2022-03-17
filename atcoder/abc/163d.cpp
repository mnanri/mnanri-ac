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
    ll n,k;
    cin >> n >> k;
    ll b=2e10;
    vector<ll> up(n+1);
    vector<ll> down(n+1);

    ll sum=0;
    for(int i=0;i<n+1;i++) {
        sum+=i;
        up[i]=sum;
    }

    ll wa=0;
    for(int i=0;i<n+1;i++){
        ll tmp=n-i;
        wa+=tmp;
        down[i]=wa;
    }

    /*for(int i=0;i<n+1;i++) cout << up[i] << ' ';
    cout << endl;
    for(int i=0;i<n+1;i++) cout << down[i] << ' ';
    cout << endl;*/

    ll cnt=0;
    for(int i=k;i<=n+1;i++){
        ll tmp=down[i-1]-up[i-1]+1;
        cnt+=tmp;
        cnt%=M;
    }

    cout << cnt << endl;
}