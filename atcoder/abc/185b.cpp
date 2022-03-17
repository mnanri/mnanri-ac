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
    ll n,m,t;
    cin >> n >> m >> t;
    ll N=n;
    vector<pair<ll,ll> > v;
    for(int i=0;i<m;i++){
        ll a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b)); 
    }

    ll time=0;
    for(int i=0;i<m;i++){
        ll tmp=v[i].first-time;
        if(n<=tmp){
            cout << "No" << endl;
            return 0;
        }
        n-=tmp;
        ll kep=v[i].second-v[i].first;
        n+=kep;
        if(n>N) n=N;
        time=v[i].second;
    }
    if(n>t-time){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}