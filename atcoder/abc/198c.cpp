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
    ll r;
    ll x,y;
    cin >> r >> x >> y;
    ll z=x*x+y*y;
    ll s=r*r;
    if(z<s){
        cout << 2 << endl;
        return 0;
    }
    ll a=z/s;
    if(z%s==0){
        ll c=1;
        while(c*c<a){
            c++;
        }
        cout << c << endl;
    }else{
        ll c=1;
        while(c*c<=a){
            c++;
        }
        cout << c << endl;
    }

}