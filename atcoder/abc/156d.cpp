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

vector<ll> fac(200001);
vector<ll> ifac(200001);

ll mpow(ll x, ll n){ //x^n(mod M)
    ll ans = 1;
    while(n != 0){
        if(n&1) ans = ans*x % M;
        x = x*x % M;
        n = n >> 1;
    }
    return ans;
}

ll comb(ll a, ll b){ //aCbをmod計算
    if(a == 0 && b == 0)return 1;
    if(a < b || a < 0)return 0;
    ll tmp = ifac[a-b]* ifac[b] % M;
    return tmp * fac[a] % M;
}

ll RepeatSquaring(ll N, ll P){ //N^P(modM)
    if(P==0) return 1;
    if(P%2==0){
        ll t = RepeatSquaring(N, P/2);
        return t*t % M;
    }
    return N * RepeatSquaring(N, P-1);
}

int main(){
    ll n;
    int a,b;
    cin >> n >> a >> b;
    ll nn;
    nn = RepeatSquaring(2,n);

    fac[0] = 1;
    ifac[0] = 1;
    for(ll i = 0; i<200001; i++){
        fac[i+1] = fac[i]*(i+1) % M; // n!(mod M)
        ifac[i+1] = ifac[i]*mpow(i+1, M-2) % M; // k!^{M-2} 
    }

    if(n<=200000){
        a = comb(n,a)%M;
        b = comb(n,b)%M;
    }else{
        a = comb(200000,a)%M;
        b = comb(200000,b)%M;
    }

    cout << nn << endl;
    cout << a << endl;
    cout << b << endl;
    cout << endl;
    ll ans=(nn-1-a-b)%M;

    cout << ans << endl;
    if(ans>=0){
        cout << ans << endl;
    }else{
        cout << ans+M << endl;
    }
}