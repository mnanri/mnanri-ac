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
    cin >> n;
    vector<pair<ll,ll> > v(n);
    for(int i=0;i<n;i++) cin >> v[i].first >> v[i].second;

    ll sum=0;
    for(int i=0;i<n;i++) sum+=v[i].first;
    //cout << sum << endl;
    vector<ll> c(n);
    for(int i=0;i<n;i++) c[i]=2*v[i].first+v[i].second;
    sort(c.begin(),c.end());
    reverse(c.begin(),c.end());

    for(int i=0;i<n;i++){
        sum-=c[i];
        //cout << sum << endl;
        if(sum<0){
            cout << i+1 << endl;
            break;
        }
    }
}