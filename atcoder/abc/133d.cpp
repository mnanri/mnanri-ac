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
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        ll w;
        cin >> w;
        a[i]=2*w;
    }
    vector<ll> b(n);
    ll c=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            c+=a[i];
        }else{
            c-=a[i];
        }
    }
    b[0]=c/2;
    for(int i=1;i<n;i++){
        b[i]=a[i-1]-b[i-1];
    }
    for(int i=0;i<n;i++) cout << b[i] << ' ';
    cout << endl;
}