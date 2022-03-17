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
    ll n;
    cin >> n;
    n*=2;
    ll cnt=0;
    for(ll i=1;i*i<=n;i++){
        if (n % i == 0) {
            ll tmp=n/i-i+1;
            if(tmp%2==0) cnt++;
            if (i * i != n) {
                ll j=n/i;
                ll kep=n/j-j+1;
                if(kep%2==0) cnt++;
            }
        }
    }

    cout << cnt << endl;
}