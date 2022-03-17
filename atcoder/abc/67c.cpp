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
    ll sum=0;
    vector<ll> b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
        b[i]=sum;
    }
    ll ans=abs(sum-2*b[0]);
    for(int i=0;i<n-1;i++) ans=min(ans,abs(sum-2*b[i]));
    cout << ans << endl;
}