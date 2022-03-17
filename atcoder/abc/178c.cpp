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
    ll x;
    cin >> x;

    ll t=1,n=1,e=1;
    for(int i=1;i<=x;i++){
        t= (t*10)%M;
        n= (n*9)%M;
        e= (e*8)%M;
    }

    ll ans=(t-2*n+e)%M;
    
    if(ans>=0){
        cout << ans << endl;
    }else{
        cout << ans+M << endl;
    }
}