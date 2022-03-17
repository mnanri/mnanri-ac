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
    ll n,d;
    cin >> n >> d;
    vector<pair<ll,ll> > x;
    for(int i=0;i<n;i++){
        ll a,b,c;
        cin >> a >> b >> c;
        x.push_back(make_pair(a,c));
        x.push_back(make_pair(b+1,-c));    
    }
    sort(x.begin(),x.end());

    vector<pair<ll,ll> > y;
    y.push_back(x[0]);
    int cnt=0;
    for(int i=1;i<x.size();i++){
        if(x[i-1].first==x[i].first){
            y[cnt].second+=x[i].second;
        }else{
            y.push_back(x[i]);
            cnt++;
        }
    }

    ll sum=0;
    vector<pair<ll,ll> > z;
    for(int i=0;i<y.size()-1;i++){
        ll interval=y[i+1].first-y[i].first;
        sum+=y[i].second;
        z.push_back(make_pair(interval,sum));
    }

    ll ans=0;
    for(int i=0;i<z.size();i++){
        ll tmp=min(d,z[i].second);
        ans+=tmp*z[i].first;
    }

    cout << ans << endl;
}