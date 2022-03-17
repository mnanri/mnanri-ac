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
    sort(a.begin(),a.end());
    
    vector<ll> r(n-1);
    ll tmp=0;
    for(int i=0;i<n-1;i++){
        tmp+=a[i];
        r[i]=tmp;
    }

    ll sum=0;
    for(int i=1;i<n;i++){
        ll kep=i*a[i]-r[i-1];
        sum+=kep;
    }

    cout << sum << endl;
}