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
#include <numeric>
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
    ll n,m,k;
    cin >> n >> m >> k;
    ll a[n+1],b[m+1];
    a[0]=0,b[0]=0;
    ll suma=0,sumb=0;
    for(int i=1;i<=n;i++){
        ll x;
        cin >> x;
        suma+=x;
        a[i]=suma;
    }
    for(int i=1;i<=m;i++){
        ll x;
        cin >> x;
        sumb+=x;
        b[i]=sumb;
    }
    //for(int i=0;i<=m;i++) cout << b[i] << ' ';
    int cnt=m,ans=0;
    for(int i=0;i<=n;i++){
        while(true){
            if(a[i]+b[cnt]<=k){
                ans=max(ans,i+cnt);
                break;
            }else{
                if(cnt>0){
                    cnt--;
                }else{
                    break;
                }
            }
        }
    }
    //cout << a[2]+b[1] << endl;
    cout << ans << endl;
}