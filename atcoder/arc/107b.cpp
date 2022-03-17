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

    ll sum=0;
    for(ll i=2;i<=2*n;i++){
        if(k+i<2 || k+i>2*n) continue;
        if(k+i<=n+1){
            if(i<=n+1){
                sum+=(i-1)*(k+i-1);
            }else{
                ll tmp=2*n+1-i;
                sum+=tmp*(k+i-1);
            }
        }else{
            ll kep=2*n+1-(k+i);
            if(i<=n+1){
                sum+=(i-1)*kep;
            }else{
                ll tmp=2*n+1-i;
                sum+=tmp*kep;
            }
        }
    }

    cout << sum << endl;
}