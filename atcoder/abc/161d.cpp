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
    ll k;
    cin >> k;

    ll branch=9;
    if(k<=branch){
        cout << k << endl;
        return 0;
    }

    ll cnt=1;
    ll time=1;
    while(k>branch){
        cnt++;
        time*=3;
        branch+=time*9;
        ll tmp=0;
        ll check=cnt+2;
        for(int i=0;i<cnt;i++){
            if(i=cnt-1) {
                tmp+=(ll)pow(3,i);
            }else{
                tmp+=(check-i)*(ll)pow(3,i);
            }
        }
        branch-=tmp;
    }

    for(int i=0;i<;i++)

}