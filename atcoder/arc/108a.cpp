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
    ll s,p;
    cin >> s >> p;

    vector<ll> div;
    for(ll i=1;i*i<=p;i++){
        if(p%i==0){
            div.push_back(i);
        }
    }

    //int cnt=0;
    for(int i=0;i<div.size();i++){
        if(div[i]+p/div[i]==s){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}