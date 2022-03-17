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
    vector<int> p(n);
    for(int i=0;i<n;i++) cin >> p[i];

    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(p[i]==i+1){
            swap(p[i],p[i+1]);
            cnt++;
        }
    }
    if(p[n-1]==n) cnt++;
    cout << cnt << endl;
}