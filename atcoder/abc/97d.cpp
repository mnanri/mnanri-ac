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
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());

    ll kep=a[0];
    ll tmp=M;
    ll index=0;
    for(int i=1;i<n;i++){
        if(abs(a[i]*2-kep)<tmp){
            tmp=abs(a[i]*2-kep);
            index=i;
        }
    }
    cout << kep << ' ' << a[index] << endl;
}