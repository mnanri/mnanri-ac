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
    vector<string> s(n);
    for(int i=0;i<n;i++) cin >> s[i];

    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=="OR"){
            ans+=pow(2,i+1);
        }
    }

    cout << ans+1 << endl;
}