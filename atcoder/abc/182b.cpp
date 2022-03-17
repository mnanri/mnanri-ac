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
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int ans=2;
    int cnt=0;
    for(int i=2;i<=1000;i++){
        int tmp=0;
        for(int j=0;j<n;j++){
            if(a[j]%i==0) tmp++;
        }
        if(tmp>cnt){
            cnt=tmp;
            ans=i;
        }
    }

    cout << ans << endl;
}