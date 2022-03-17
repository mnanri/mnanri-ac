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
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    //sort(a.begin(),a.end());
    
    vector<ll> l(n-1);
    ll tmp=a[0];
    for(int i=0;i<n-1;i++){
        tmp=gcd(tmp,a[i]);
        l[i]=tmp;
    }
    vector<ll> r(n-1);
    tmp=a[n-1];
    for(int i=0;i<n-1;i++){
        tmp=gcd(tmp,a[n-1-i]);
        r[n-2-i]=tmp;
    }
    vector<ll> c(n-2);
    for(int i=1;i<n-1;i++) c[i-1]=gcd(a[i-1],a[i+1]);

    //for(int i=0;i<n-1;i++) cout << l[i] << ' ' << r[i] << endl;
    //for(int i=0;i<n-2;i++) cout << c[i] << endl;

    ll ans=max(l[n-2],r[0]);
    for(int i=0;i<n-2;i++){
        ll tmp=gcd(c[i],l[i]);
        tmp=gcd(tmp,r[i+1]);
        ans=max(ans,tmp);
    }

    cout << ans << endl;
}