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
    vector<int> div;
    for(int i=1;i*i<=m;i++){
        if(m%i==0){
            div.push_back(i);
            if(i!=m/i) div.push_back(m/i);
        }
    }
    sort(div.begin(),div.end());
    reverse(div.begin(),div.end());
    int ans=0;
    for(int i=div.size()-1;i>=0;i--){
        if(m/div[i]>=n) ans=div[i];
    }
    cout << ans << endl;
}