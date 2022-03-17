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
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<ll> b(n);
    for(int i=0;i<n;i++) b[i]=abs(a[i]-x);
    sort(b.begin(),b.end());

    vector<ll> c;
    c.push_back(b[0]);
    for(int i=1;i<n;i++){
        if(b[i]!=b[i-1]) c.push_back(b[i]);
    }
    ll m=c.size();

    ll ans=c[0];
    for(int i=0;i<m;i++){
        ans=gcd(ans,c[i]);
    }
    cout << ans << endl;
}