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
    int v,t,s,d;
    cin >> v >> t >> s >> d;
    if(d<v*t || d>v*s){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}