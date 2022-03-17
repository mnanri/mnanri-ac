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
    long double  x,y,r,p;
    cin >> x >> y >> r;
    ll low=ceil(x-r);
    ll high=floor(x+r);

    ll num=0;
    for(ll i=low;i<=high;i++){
        p=sqrt(pow(r,2)-pow((x-i),2));
        ll up=y+p;
        
        ll down=y-p;
        num+=(up-down+1);
        //cout << i << ' ' << num << endl;
    }
    cout << num << endl;
    
}