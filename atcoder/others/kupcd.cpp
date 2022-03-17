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
    int n;
    cin >> n;
    if(n%2==1  || n==2) {
        cout << "impossible" << endl;
        return 0;
    }

    cout << n/2 << endl;
    for(ll i=1;i<=n/2;i++){
        ll tmp=n*n/2;
        ll a=2*i-1;
        cout << 2 << ' ' << a << ' ' << tmp-a << endl;
    }
}