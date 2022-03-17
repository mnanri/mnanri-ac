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
    vector<int> h;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        h.push_back(t);
    }

    int cnt=h.at(0);
    for(int i=1;i<n;i++){
        if(h.at(i-1)<h.at(i)) cnt+=h.at(i)-h.at(i-1);
    }

    cout << cnt << endl;
}

