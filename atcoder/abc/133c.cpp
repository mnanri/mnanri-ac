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

int main(){
    ll l,r;
    cin >> l >> r;
    if(r-l>=673){
        cout << 0 << endl;
        return 0;
    }

    ll ans=2018;
    for(ll i=l;i<r;i++){
        for(ll j=i+1;j<=r;j++){
            ll tmp=((i%2019)*(j%2019))%2019;
            ans=min(ans,tmp);
        }
    }

    cout << ans << endl;
}