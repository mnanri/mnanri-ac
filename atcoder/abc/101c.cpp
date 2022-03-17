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
    vector<int> a(n);
    int kep;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]==1) kep=i;
    }
    int l=kep+1;
    int r=n-kep;
    //if(l<=k || r<=k){
        n-=k;
        if(n%(k-1)==0){
            cout << 1+n/(k-1) << endl;
        }else{
            cout << 2+n/(k-1) << endl;
        }
    //}
}