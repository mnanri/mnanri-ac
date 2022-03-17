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
    int n,k;
    cin >> n >> k;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        int b;
        cin >> b;
        a[b]++;
    } 
    //for(int i=0;i<n;i++) cout << a[i] << ' ';
    //cout << endl;
    ll tmp=a[0];
    if(tmp>k) tmp=k;
    ll sum=0;
    if(tmp==0){
        cout << 0 << endl;
        return 0;
    }

    for(int i=1;i<n;i++){
        if(a[i]>=tmp){
            //continue;
        }else{
            ll dec=tmp-a[i];
            sum+=i*dec;
            //cout << sum << endl;
            tmp=a[i];
            if(tmp==0){
                break;
            }
        }
    }
    cout << sum << endl;
}