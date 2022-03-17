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
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    if(a==b) cout << x << endl;
    if(a>b){
        if(x*2<y){
            cout << x*(2*(a-b)-1) << endl;
        }else{
            cout << x+y*(a-b-1) << endl;
        }
    }
    if(a<b){
        if(x*2<y){
            cout << x*(2*(b-a)+1) << endl;
        }else{
            cout << x+y*(b-a) << endl;
        }
    }
}