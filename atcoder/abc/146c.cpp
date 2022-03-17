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
    ll a,b,x;
    cin >> a >> b >> x;
    if(a+b>x){
        cout << 0 << endl;
        return 0;
    } 

    /*ll cnt=min(x/a,(ll)1e9);
    
    for(ll i=cnt;i>=1;i--){
        string s=to_string(i);
        if(a*i+b*s.size()<=x) {
            cout << i << endl;
            return 0;
        }
    }*/

    vector<ll> kep;
    for(int i=1;i<=10;i++){
        kep.push_back((x-b*i)/a);
    }
    for(int i=0;i<10;i++){
        if(kep.at(i)>=(ll)pow(10,i+1)) kep.at(i)=(ll)pow(10,i+1)-1;
        if(kep.at(9)>=1e9) kep.at(9)=1e9;
    }

    //for(int i=0;i<10;i++) cout << kep.at(i) << ' ';
    //cout << endl;

    ll ans=0;
    for(int i=0;i<10;i++) ans=max(ans,kep.at(i));

    cout << ans << endl;
}