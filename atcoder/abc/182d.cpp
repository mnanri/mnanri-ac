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
    int n;
    cin >> n;
    ll a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    if(n==1){
        if(a[0]>0){
            cout << a[0] << endl;
        }else{
            cout << 0 << endl;
        }
        return 0;
    }

    vector<pair<ll,ll> > sum;
    sum.push_back(make_pair(a[0],0));
    for(int i=1;i<n;i++){
        ll tmp=sum.at(i-1).first+a[i];
        sum.push_back(make_pair(tmp,i));
    }

    vector<pair<ll,ll> > check;
    check.push_back(make_pair(sum[0].first,0));
    for(int i=1;i<n;i++){
        ll tmp=check.at(i-1).first+sum.at(i).first;
        check.push_back(make_pair(tmp,i));
    }

    ll x=check.at(0).first;
    ll y=check.at(0).second;
    for(int i=0;i<n-1;i++){
        if(x<=check.at(i).first){
            x=check.at(i).first;
            y=check.at(i).second;
        }
    }
    int rock=0;
    if(x<check.at(n-1).first){
        rock=1;
    }

    ll z=sum.at(0).first;
    for(int i=0;i<y;i++){
        if(z<=sum.at(i).first) z=sum.at(i).first;
    }

    if(rock){
        if(x+z<check.at(n-1).first){
            cout << check.at(n-1).first << endl;
            return 0;
        }
    }
    
    if(x<0 && x+z<0){
        cout << 0 << endl;
        return 0;
    }

    cout << max(x,x+z) << endl;    
}