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

long long power(long long x, long long n) {
    long long ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * x % 100;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x = x * x % 100;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    vector<vector<int> > d={
        {0,0,0,0},
        {1,1,1,1},
        {6,2,4,8},
        {1,3,9,7},
        {6,4,6,4},
        {5,5,5,5},
        {6,6,6,6},
        {1,7,9,3},
        {6,8,4,2},
        {1,9,1,9}
    };
    ll x = power(b,c);
    int y=a%10;
    cout << d[y][x%4] << endl;
}