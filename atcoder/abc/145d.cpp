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

ll rep_pow(ll x, ll n) {
    ll ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * x % M;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x = x * x % M;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}

int main(){
    ll x,y;
    cin >> x >> y;
    if((x+y)%3!=0){
        cout << 0 << endl;
        return 0;
    }
    ll cnt=(x+y)/3;
    ll sub=abs(x-y);
    ll tmp=cnt-sub;
    if(tmp<0){
        cout << 0 << endl;
        return 0;
    }
    if(tmp%2==1){
        cout << 0 << endl;
        return 0;
    }
    ll a=tmp/2;
    if(a==0){
        cout << 1 << endl;
        return 0;
    }

    ll w=1;
    for(int i=cnt;i>cnt-a;i--){
        w*=i;
        w%=M;
    }

    ll z=1;
    for(int i=1;i<=a;i++){
        z*=i;
        z%=M;
    }
    ll zz=rep_pow(z,M-2);

    ll ans=(w*zz)%M;
    cout << ans << endl;
}