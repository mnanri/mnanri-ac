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

ll game(ll r,ll s,ll p,char x){
    ll res=0;
    if(x=='r') res=p;
    if(x=='s') res=r;
    if(x=='p') res=s;
    return res; 
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<ll> pt;
    ll r,s,p;
    cin >> r >> s >> p;
    string t;
    cin >> t;

    vector<vector<char> > hand(k); 
    for(int i=0;i<n;i++) hand.at(i%k).push_back(t.at(i));
    
    ll sum=0;
    for(int i=0;i<k;i++){
        int cnt=1;
        sum+=game(r,s,p,hand.at(i).at(0));
        for(int j=1;j<hand.at(i).size();j++){
            if(hand.at(i).at(j)!=hand.at(i).at(j-1)){
                cnt=1;
                sum+=game(r,s,p,hand.at(i).at(j));
            }else{
                cnt++;
                if(cnt%2==1) sum+=game(r,s,p,hand.at(i).at(j));
            }
        }
    }

    cout << sum << endl; 
}