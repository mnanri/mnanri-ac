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
    for(int i=0;i<n;i++)cin >> a[i];
    vector<ll> d(n);
    for(int i=0;i<n;i++) d[i]=a[i]*a[i];
    vector<ll> s(n);
    int sum=0;
    s[0]=0;
    for(int i=1;i<n;i++){
        sum+=a[i-1];
        s[i]=sum;
    }
    ll ans=0;
    for(int i=0;i<n;i++) ans+=(n-1)*d[i];
    for(int i=0;i<n;i++) ans-=2*a[i]*s[i];
    cout << ans << endl;
}