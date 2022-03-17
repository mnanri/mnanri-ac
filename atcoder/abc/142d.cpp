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
    ll a,b;
    cin >> a >> b;
    if(a==1 || b==1){
        cout << 1 << endl;
        return 0;
    }

    vector<ll> g;
    if(a>b) swap(a,b);
    for(ll i=1;i*i<a;i++){
        if(a%i==0){
            if(b%i==0) g.push_back(i);
            if(a/i!=i) {
                if(b%(a/i)==0) g.push_back(a/i);
            }
        }
    }
    sort(g.begin(),g.end());
    //for(int i=0;i<g.size();i++) cout << g[i] << endl;

    if(g.size()<3){
        cout << g.size() << endl;
        return 0;
    }
    ll n=g[g.size()-1];
    vector<bool> uncheck(g.size(),true);
    map<ll,ll> kep;
    kep[1]=1;
    uncheck[0]=false;
    for(int i=1;i<g.size();i++){
        if(uncheck[i]){
            uncheck[i]=false;
            kep[g[i]]=1;
            for(int j=i+1;j<g.size();j++){
                if(g[j]%g[i]==0){
                    kep.at(g[i])++;
                    uncheck[j]=false;
                }
            }
        }
    }

    //for(auto p: kep) cout << p.first << endl;

    cout << kep.size() << endl;
}