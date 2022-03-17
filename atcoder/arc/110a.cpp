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
    vector<ll> p(30,0);
    for(int i=2;i<=n;i++){
        int kep=i;
        for(int a=2;a*a<=kep;a++){
            if(kep%a!=0) continue;
            ll ex=0;
            while(kep%a==0){
                ex++;
                kep/=a;
                p.at(a)=max(p.at(a),ex);
            } 
            //p.at(a)=max(p.at(a),ex);
        }
        if(kep!=1) p.at(kep)=max(p.at(kep),(ll)1);
    }

    //for(int i=0;i<30;i++) cout << p.at(i) << ' ';
    ll sum=1;
    for(ll i=2;i<30;i++){
        sum*=(ll)pow(i,p[i]);
    }
    cout << sum+1 << endl;
}
