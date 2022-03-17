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
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
    int n,k;
    cin >> n >> k;
    int t[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin >> t[i][j];
    }

    int cnt=0;
    vector<int> r(n);
    for(int i=0;i<n;i++) r[i]=i;
    do{ 
        if(r[0]!=0) continue;
        int tmp=0;
        for(int i=0;i<n-1;i++){
            tmp+=t[r[i]][r[i+1]];
        }
        tmp+=t[r[n-1]][r[0]];
        if(tmp==k) cnt++;
    }while (next_permutation(r.begin(), r.end()));

    cout << cnt << endl;
}
