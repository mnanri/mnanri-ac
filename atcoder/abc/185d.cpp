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
    vector<ll> a(m);
    for(int i=0;i<m;i++) cin >> a[i];
    if(m==0){
        cout << 1 << endl;
        return 0;
    }
    if(n==m){
        cout << 0 << endl;
        return 0;
    }
    sort(a.begin(),a.end());

    vector<ll> b(m+1);
    ll x=1;
    for(int i=0;i<m;i++){
        b[i]=a[i]-x;
        x=a[i]+1;
    }
    if(x==n+1){
        b[m]=0;
    }else{
        b[m]=n-x+1;
    }
    sort(b.begin(),b.end());

    ll k=0,kep=0;
    for(int i=0;i<m+1;i++){
        if(b[i]!=0){
            k=b[i];
            kep=i;
            break;
        }
    }

    ll sum=0;
    for(int i=kep;i<m+1;i++){
        if(b[i]%k==0){
            sum+=(b[i]/k);
        }else{
            sum+=(b[i]/k+1);
        }
    }
    //cout << k << endl;
    cout << sum << endl;
}