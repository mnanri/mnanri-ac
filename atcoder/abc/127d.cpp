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
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<pair<ll,ll > > x(m);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> x[i].second >> x[i].first;
    sort(x.begin(),x.end());
    reverse(x.begin(),x.end());

    vector<ll> d;
    int cnt=0;
    int k=0;
    while(cnt<n && k<m){
        for(int i=0;i<x[k].second;i++){
            if(d.size()<n) d.push_back(x[k].first);
        }
        cnt+=x[k].second;
        k++;
    }

    //for(int i=0;i<d.size();i++) cout << d[i] << ' ';
    //cout << endl; 

    for(int i=0;i<n;i++) a.push_back(d[i]);
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());

    ll sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    cout << sum << endl;
}