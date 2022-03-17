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
    vector<int> a(n);
    vector<int> p(n);
    vector<int> x(n);
    for(int i=0;i<n;i++) cin >> a[i] >> p[i] >> x[i];
    
    int ans=M;
    for(int i=0;i<n;i++){
        if(x[i]-a[i]<=0) continue;
        ans=min(ans,p[i]);
    }
    if(ans==M){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
}