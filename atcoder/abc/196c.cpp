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
    ll n;
    cin >> n;
    if(n<10){
        cout << 0 << endl;
        return 0;
    }
    string m=to_string(n);
    string a;
    ll c;
    int k=m.size()/2;
    if(m.size()%2==0){
        for(int i=0;i<k;i++) a.push_back(m[i]);
    }else{
        for(int i=0;i<=k;i++) a.push_back(m[i]);
    }
    ll b=stoi(a);

    ll cnt=0;
    for(int i=1;i<=b;i++){
        ll d=to_string(i).size();
        d=(ll)pow(10,d);
        ll tmp=i*d+i;
        //if(i==b) cout << tmp << endl;
        if(tmp<=n) cnt++;
    }
    cout << cnt << endl;
}