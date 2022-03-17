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
    vector<ll> p;
    vector<ll> m;
    int cnt=0;
    for(int i=0;i<n;i++){
        ll a;
        cin >> a;
        if(a<=0) {
            cnt++;
            m.push_back(-a);
        }else{
            p.push_back(a);
        }
    }
    sort(m.begin(),m.end());
    sort(p.begin(),p.end());
    ll sum=0;
    for(int i=0;i<m.size();i++) sum+=m[i];
    for(int i=0;i<p.size();i++) sum+=p[i];
    if(m.size()==0){
        cout << sum << endl;
        return 0;
    }
    if(p.size()==0){
        if(cnt%2==0){
            cout << sum << endl;
        }else{
            cout << sum-2*m[0] << endl;
        }
        return 0;
    }

    if(cnt%2==0){
        cout << sum << endl;
    }else{
        cout << sum-2*min(m[0],p[0]) << endl;
    }
}