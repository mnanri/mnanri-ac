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
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i=0;i<n;i++) cin >> s[i];

    //sort(s.begin(),s.end());

    vector<int> c(n,0);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(s[j][i]=='1'){
                c[j]++;
            }
        }
    }
    ll odd=0,even=0;
    for(int i=0;i<n;i++){
        if(c[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    ll ans=even*odd;
    cout << ans << endl;
}