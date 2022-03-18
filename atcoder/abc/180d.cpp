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
    ll x,y,a,b;
    cin >> x >> y >> a >> b;
    y--;
    ll exp=0;
    for(int i=0;i<=64;i++){
        if(x*(ll)pow(a,i)>y) break;
        ll tmp=y-x*(ll)pow(a,i);
        ll cnt=i+tmp/b;
        exp=max(exp,cnt);
    }
    cout << exp << endl;
}