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
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    ll sum=0;
    ll cnt=0;
    int r=0;
    for(int i=0;i<n;i++){
        while (sum<k){
            if(r==n) break;
            sum+=a[r];
            r++; 
        }
        if(sum<k) break;
        cnt+=(n-r+1);
        sum-=a[i];
    }
    cout << cnt << endl;
}