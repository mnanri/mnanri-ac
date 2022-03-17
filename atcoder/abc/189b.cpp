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
    int x;
    cin >> n >> x;
    x*=100;
    int sum=0;
    vector<int> w;
    for(int i=0;i<n;i++){
        int v,p;
        cin >> v >> p;
        sum+=v*p;
        w.push_back(sum);
    }
    for(int i=0;i<n;i++){
        if(w[i]>x){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}