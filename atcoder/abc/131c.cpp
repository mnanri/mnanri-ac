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

ll gcd(ll a, ll b){
   if (a%b == 0){
       return(b);
   }else{
       return(gcd(b, a%b));
   }
}

ll lcm(ll a, ll b){
   return a * b / gcd(a, b);
}

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    ll x=b-a+1;
    ll y=b/c-a/c;
    if(a%c==0) y++;
    ll z=b/d-a/d;
    if(a%d==0) z++;
    ll e=lcm(c,d);
    ll w=b/e-a/e;
    if(a%e==0) w++;
    cout << x-y-z+w << endl;
}