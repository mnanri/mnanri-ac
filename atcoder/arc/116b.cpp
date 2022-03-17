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
const ll M2 = 998244353;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    sort(a.begin(),a.end());
    vector<ll> s(n);
    s[0]=0;
    ll tmp=0;
    for(int i=1;i<n;i++){
        tmp=((tmp*2)%M2);
        tmp+=a[i-1];
        tmp%=M2;
        s[i]=tmp;
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=((a[i]*s[i])%M2);
        sum%=M2;
        sum+=((a[i]*a[i])%M2);
        sum%=M2;
    }

    cout << sum << endl;
}