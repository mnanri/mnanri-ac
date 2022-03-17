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
    int n;
    ll w;
    cin >> n >> w;
    vector<vector<ll> > sim(n,vector<ll>(3));
    for(int i=0;i<n;i++) cin >> sim[i][0] >> sim[i][1] >> sim[i][2];

    vector<ll> inc(200001,0);
    vector<ll> dec(200001,0);
    for(int i=0;i<n;i++){
        inc[sim[i][0]]+=sim[i][2];
        dec[sim[i][1]]+=sim[i][2];
    }

    ll tmp=0;
    for(int i=0;i<200001;i++){
        tmp-=dec[i];
        tmp+=inc[i];
        if(tmp>w){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}