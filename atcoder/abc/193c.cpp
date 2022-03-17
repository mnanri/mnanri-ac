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
    ll n;
    cin >> n;
    ll cnt=0;
    map<ll,int> num;
    for(ll i=2;i*i<=n;i++){
        ll var=i*i;
        while(var<=n){
            if(num.count(var)){
                num.at(var)++;
            }else{
                num[var]=1;
            }
            var*=i;
        }
    }
    cout << n-num.size() << endl;
}