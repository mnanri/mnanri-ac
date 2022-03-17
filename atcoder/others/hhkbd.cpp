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
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        ll n,a,b;
        cin >> n >> a >> b;
        if(a+b>n){
            cout << 0 << endl;
            continue;
        }
        ll tmp=(((n-a+1)*(n-a+1))%M)*(((n-b+1)*(n-b+1))%M)%M;
        ll kep=n-a-b+1;
        if(a>b){
            ll x=(b*(2*kep+b+1)/2)%M;
            ll y=(n-a+1),z=(a-b+1);
            ll subst=((2*((x*x)-(y*y))%M)+(((y*y)%M)*((z*z)%M)%M))%M;
            tmp-=subst;
            if(tmp>-1){
                cout << tmp << endl;
            }else{
                cout << tmp+M << endl;
            }
        }else{
            ll x=(a*(2*kep+a+1)/2)%M;
            ll y=(n-b+1),z=(b-a+1);
            ll subst=((2*((x*x)-(y*y))%M)+(((y*y)%M)*((z*z)%M)%M))%M;
            tmp-=subst;
            if(tmp>-1){
                cout << tmp << endl;
            }else{
                cout << tmp+M << endl;
            }
        }
    }
}