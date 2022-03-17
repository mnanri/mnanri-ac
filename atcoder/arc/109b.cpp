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
    ll n;
    cin >> n;
    ll m=n;
    n=2*n+2;
    ll a=1,b=1e10;
    ll mid=(a+b)/2;
    while(1){
        if(((mid+1)*(mid+2)>n+1 && mid*(mid+1)<=n+1)) break;
        if(mid*(mid+1)<n+1){
            a=mid;
            mid=(a+b)/2;
        }else{
            b=mid;
            mid=(a+b)/2;
        } 
    }
    //cout << mid << endl;
    cout << m+1-mid << endl;
}