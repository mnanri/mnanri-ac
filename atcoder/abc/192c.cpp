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
    int n,k;
    cin >> n >> k;
    for(int i=0;i<k;i++){
        string tmp=to_string(n);
        sort(tmp.begin(),tmp.end());
        string f=tmp;
        reverse(tmp.begin(),tmp.end());
        string g=tmp;
        n=stoi(g)-stoi(f);
        //cout << stoi(g) << ' ' << stoi(f) << endl;
    }
    cout << n << endl;
    //cout << stoi("0123") << endl;
}