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
    if(n%2==1){
        cout << 0 << endl;
        return 0;
    }

    ll cnt=0;
    ll split=10;
    while(split<=n){
        cnt+=n/split;
        split*=5;
    }
    cout << cnt << endl;
}