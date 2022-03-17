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
    ll x[n];
    for(int i=0;i<n;i++) cin >> x[i];

    ll a=0,c=0;
    double b=0;
    for(int i=0;i<n;i++) a+=abs(x[i]);

    for(int i=0;i<n;i++) b+=(x[i]*x[i]);
    b = sqrt(b);

    for(int i=0;i<n;i++) c=max(c,abs(x[i]));

    cout << a << endl;
    cout << fixed << setprecision(11) << b << endl;
    cout << c << endl;
}