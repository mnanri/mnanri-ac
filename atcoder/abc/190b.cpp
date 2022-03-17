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
    int n,s,d;
    cin >> n >> s >> d;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        if(a<s && b>d){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}