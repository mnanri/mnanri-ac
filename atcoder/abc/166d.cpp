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
    ll x;
    cin >> x;
    vector<ll> a(241);
    for(int i=-120;i<=120;i++){
        a[i+120]=i*i*i*i*i;
    }

    for(int i=0;i<241;i++){
        for(int j=0;j<241;j++){
            if(a[i]-a[j]==x){
                cout << i-120 << ' ' << j-120 << endl;
                return 0;
            }
        }
    }
}