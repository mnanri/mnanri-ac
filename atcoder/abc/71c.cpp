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
    ll h=0,w=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            if(h!=0){
                w=a[i];
                break;
            }else{
                h=a[i];
                i++;
            }            
        }
        if(i>n-2) break;
    }

    //cout << h << ' ' << w << endl;
    cout << h*w << endl;
}