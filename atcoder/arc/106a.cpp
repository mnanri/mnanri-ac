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
    ll b=1;
    int x=0;
    while(n>b){
        b*=5;
        x++;
        ll tmp=n-b;
        ll a=1;
        int y=0; 
        while(tmp>a){
            a*=3;
            y++;
            if(tmp==a){
                cout << y << ' ' << x << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
}