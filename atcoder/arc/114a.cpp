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
    vector<int> x(n);
    for(int i=0;i<n;i++) cin >> x[i];

    vector<ll> p={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    ll ans=1;
    for(int i=0;i<15;i++) ans*=p[i];

    for(int i=0;i<(1<<15);i++){
        bitset<15> s(i);
        ll tmp=1;
        for(int j=0;j<15;j++){
            if(s.test(j)){
                tmp*=p[j];
            }
        }
        int check=1;
        for(int k=0;k<n;k++){
            if(gcd(tmp,x[k])==1){
                check=0;
                break;
            }
        }
        if(check){
            ans=min(ans,tmp);
        }
    }
    cout << ans << endl;
}