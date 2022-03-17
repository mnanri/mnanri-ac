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

ll RepeatSquaring(ll N, ll P){ //N^P(modM)
    if(P==0) return 1;
    if(P%2==0){
        ll t = RepeatSquaring(N, P/2);
        return t*t % M;
    }
    return (N * RepeatSquaring(N, P-1))%M;
}

ll stair(ll k, ll n){
    ll res=1;
    for(int i=k;i<=n;i++){
        res = (res*i)%M;
    }
    return res;
}

int main(){
    int n,a,b;
    cin >> n >> a >> b;

    ll n2 = RepeatSquaring(2,n);
    n2--;
    //cout << n2 << endl;

    ll N,xa,ya,xb,yb;
    if(n<=200000){
        N = n;
    }else{
        N = 200000;
    }
    xa = stair(N-a+1,N);
    //cout << xa << endl;
    ya = stair(1,a);
    //cout << ya << endl;
    xb = stair(N-b+1,N);
    //cout << xb << endl;
    yb = stair(1,b); 
    //cout << yb << endl;       
    
    ll yam = RepeatSquaring(ya,M-2);
    //cout << yam << endl;
    ll ybm = RepeatSquaring(yb,M-2);
    //cout << ybm << endl;

    ll aa = (xa*yam)%M;
    //cout << aa << endl;
    ll bb = (xb*ybm)%M;
    //cout << bb << endl;

    ll ans = (n2-aa-bb+2*M)%M;
    /*cout << ans << endl;
    cout << endl;*/
    if(ans>=0){
        cout << ans << endl;
    }else{
        cout << ans+M << endl; 
    }
}