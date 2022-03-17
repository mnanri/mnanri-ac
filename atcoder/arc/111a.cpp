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

long long repow(long long x, long long n, long long split) {
    long long ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * x % split;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x = x * x % split;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}

int main(){
    ll n,m;
    cin >> n >> m;

    ll split=m*m;
    ll ans=repow(10,n,split);
    cout << ans/m << endl;
}