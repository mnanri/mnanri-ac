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
const ll M2= 998244353;

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    ll x=(a*(a+1)/2)%M2;
    ll y=(b*(b+1)/2)%M2;
    ll z=(c*(c+1)/2)%M2;

    cout << (((x*y)%M2)*z)%M2 << endl;
}