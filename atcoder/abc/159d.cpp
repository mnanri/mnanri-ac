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
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    vector<ll> c(n+1,0);
    for(int i=0;i<n;i++){
        c.at(a.at(i))++;
    }

    ll sum=0;
    for(int i=0;i<n+1;i++){
        if(c.at(i)>1) sum+=c.at(i)*(c.at(i)-1)/2;
    }

    for(int i=0;i<n;i++){
        if(c.at(a.at(i))>1){
            cout << sum - c.at(a.at(i)) +1 << endl;
        }else{
            cout << sum << endl;
        } 
    }
}