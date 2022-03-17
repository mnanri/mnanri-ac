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
    string s;
    cin >> n >> s;
    vector<ll> r,b,g;
    for(ll i=0;i<n;i++){
        if(s.at(i)=='R') r.push_back(i);
        if(s.at(i)=='B') b.push_back(i);
        if(s.at(i)=='G') g.push_back(i);
    }
    ll kep=g.size();
    ll sum=0;
    for(int i=0;i<r.size();i++){

        for(int j=0;j<b.size();j++){
            ll tmp=abs(r.at(i)-b.at(j));
            sum+=kep;
            if(r.at(i)>b.at(j)){
                if(b.at(j)-tmp>-1 && s.at(b.at(j)-tmp)=='G') sum--;
                if(r.at(i)+tmp<n && s.at(r.at(i)+tmp)=='G') sum--;
                if(tmp%2==0){
                    if(s.at(b.at(j)+tmp/2)=='G') sum--;
                }
            }else{
                if(r.at(i)-tmp>-1 && s.at(r.at(i)-tmp)=='G') sum--;
                if(b.at(j)+tmp<n && s.at(b.at(j)+tmp)=='G') sum--;
                if(tmp%2==0){
                    if(s.at(r.at(i)+tmp/2)=='G') sum--;
                }
            }
        }
    }

    cout << sum << endl;
}