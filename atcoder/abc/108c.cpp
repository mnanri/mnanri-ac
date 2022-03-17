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
    ll n,k;
    cin >> n >> k;
    ll cnt=0;
    ll var=n/k;
    cnt+=(var*var*var);
    if(k%2==0){
        if(n-k*var>=k/2) var++;
        cnt+=(var*var*var);
    }
    cout << cnt << endl;
}