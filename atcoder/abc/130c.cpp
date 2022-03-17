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
    ll w,h,x,y;
    cin >> w >> h >> x >> y;
    cout << fixed << setprecision(11) << w*h*0.5 << ' ';

    if(w*0.5==x*1.0 && h*0.5==y*1.0){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
}