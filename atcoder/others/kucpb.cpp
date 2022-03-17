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
    ll n,k;
    cin >> n >> k;
    vector<vector<ll> > v;
    for(int i=0;i<n;i++){
        vector<ll> w;
        for(int j=0;j<k;j++){
            ll x;
            cin >> x;
            w.push_back(x);
        }
        sort(w.begin(),w.end());
        v.push_back(w);
    }

    
}