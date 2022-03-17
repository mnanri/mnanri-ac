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
    vector<ll> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    vector<ll> dist(n+1,-1);
    dist.at(0)=abs(a.at(0));
    dist.at(n)=abs(a.at(n-1));
    for(int i=1;i<n;i++){
        dist.at(i)=abs(a.at(i)-a.at(i-1));
    }
    ll sum=0;
    for(int i=0;i<n+1;i++) sum+=dist.at(i);

    vector<ll> skdist(n,-1);
    skdist.at(0)=abs(a.at(1));
    skdist.at(n-1)=abs(a.at(n-2));
    for(int i=1;i<n-1;i++){
        skdist.at(i)=abs(a.at(i+1)-a.at(i-1));
    }

    for(int i=0;i<n;i++){
        ll tmp=sum-dist.at(i)-dist.at(i+1)+skdist.at(i);
        cout << tmp << endl;
    }

}