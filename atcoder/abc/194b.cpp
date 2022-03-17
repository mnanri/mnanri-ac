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
    cin >> n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i] >> b[i];
    ll ans=M;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                ll tmp=a[i]+b[j];
                ans=min(ans,tmp);
            }else{
                ans=min(ans,max(a[i],b[j]));
            }
        }
    }

    cout << ans << endl;
}