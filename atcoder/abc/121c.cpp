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
    ll n,m;
    cin >> n >> m;
    vector<pair<ll,ll> > d;

    for(int i=0;i<n;i++){
        ll a,b;
        cin >> a >> b;
        d.push_back(make_pair(a,b));
    }

    sort(d.begin(),d.end());

    ll sum=0;
    ll cnt=0;
    for(int i=0;i<n;i++){
        if(cnt+d.at(i).second>m){
            sum+=d.at(i).first*(m-cnt);
            break;
        }else{
            cnt+=d.at(i).second;
            sum+=d.at(i).first*d.at(i).second;
        }
    }

    cout << sum << endl;
}