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
    //vector<int> a(n);
    vector<int> b(1000001,0);
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        b[x]++;
    }
    //sort(a.begin(),a.end());

    for(int i=1;i<b.size();i++){
        if(b[i]==0) continue;
        if(b[i]>1) {
            for(int j=2*i;j<b.size();j+=i) b[j]=0;
            b[i]=0;
            continue;
        }
        for(int j=2*i;j<b.size();j+=i) b[j]=0;
    }

    int cnt=0;
    for(int i=1;i<b.size();i++) cnt+=b[i];
    cout << cnt << endl;
}