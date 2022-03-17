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
    string s;
    cin >> n >> s;
    if(s.size()<3){
        cout << s.size() << endl;
        return 0;
    }

    string t;
    t.push_back(s[0]),t.push_back(s[1]);
    for(int i=2;i<n;i++){
        t.push_back(s[i]);
        int j=t.size();
        if(j<3) continue;
        if(t[j-1]=='x' && t[j-2]=='o' && t[j-3]=='f'){
            t.pop_back();
            t.pop_back();
            t.pop_back();
        }
    }

    cout << t.size() << endl;
}