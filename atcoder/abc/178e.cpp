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
    vector<pair<ll,ll> > p;
    for(int i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        p.push_back(make_pair(x,y));
    }

    ll w=p.at(0).first+p.at(0).second;
    int c=0;
    for(int i=0;i<n;i++){
        if(w>=p.at(i).first+p.at(i).second){
            w=p.at(i).first+p.at(i).second;
        }
    }

    sort(p.begin(),p.end());

    ll tmp=abs(p.at(n-1).first-p.at(c).first)+abs(p.at(n-1).second-p.at(c).second);
    for(int i=n-1;i>=0;i--){
        tmp=max(tmp,abs(p.at(i).first-p.at(c).first)+abs(p.at(i).second-p.at(c).second));
    }

    cout << tmp << endl;
}