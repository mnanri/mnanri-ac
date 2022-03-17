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
    int cnt=0;
    vector<int> r(8,0);
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a>=3200){
            cnt++;
        }else{
            r[a/400]++;
        }
    }
    int ans=0;
    for(int i=0;i<8;i++){
        if(r[i]>0) ans++;
    }
    if(ans==0){
        cout << 1 << ' ' << cnt << endl;
    }else{
        cout << ans << ' ' << ans+cnt << endl;
    }
}