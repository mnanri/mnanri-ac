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
    vector<ll> x(n);
    for(int i=0;i<n;i++) cin >> x[i];

    vector<ll> m,p;
    //ll summ=0,sump=0;
    m.push_back(0);
    p.push_back(0);
    for(int i=0;i<n;i++){
        if(x[i]<0){
            m.push_back(-x[i]);
        }else{
            p.push_back(x[i]);
        }
    }

    sort(m.begin(),m.end());
    ll a=m.size(),b=p.size();
    //for(int i=0;i<a;i++) cout << m[i] << ' ';
    //cout << endl;
    //for(int i=0;i<b;i++) cout << p[i] << ' ';
    //cout << endl;
    
    ll ans=M;
    for(int i=0;i<b;i++){
        if(i>k) break;
        if(k-i>=a) continue;
        ll tmp=min(p[i],m[k-i]);
        ans=min(ans,tmp+p[i]+m[k-i]);
    }
    for(int i=0;i<a;i++){
        if(i>k) break;
        if(k-i>=b) continue;
        ll tmp=min(p[k-i],m[i]);
        ans=min(ans,tmp+p[k-i]+m[i]);
    }

    cout << ans << endl;
}