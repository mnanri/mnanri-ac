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
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    vector<bitset<30> > b(n);
    for(int i=0;i<n;i++){
        bitset<30> s(a[i]);
        b[i]=s;
    }
    //for(int i=0;i<n;i++) cout << b[i] << endl;
    ll cnt=0;
    for(int i=29;i>=0;i--){
        for(int j=0;j<n;j++){
            if(b[j].test(i)){
                b[j] = b[j] >> 1;
                cnt++;
                if(cnt==m){
                    break;
                }
            }
        }
        if(cnt==m){
            break;
        }
        for(int i=0;i<n;i++){
            a[i]=b[i].to_ullong();
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        for(int i=0;i<n;i++){
            bitset<30> s(a[i]);
            b[i]=s;
        }
    }
    //for(int i=0;i<n;i++) cout << b[i] << endl;
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=b[i].to_ullong();
    }
    cout << ans << endl;
}