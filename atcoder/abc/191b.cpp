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
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<int> b;
    for(int i=0;i<n;i++){
        if(a[i]!=x) b.push_back(a[i]);
    }

    for(int i=0;i<b.size();i++) cout << b[i] << ' ';
    cout << endl;
}