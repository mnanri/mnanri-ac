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
    string s,t;
    cin >> s >> t;
    vector<int> a(26,0);
    vector<int> b(26,0);
    for(int i=0;i<s.size();i++){
        a[(int)s[i]-97]++;
        b[(int)t[i]-97]++;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    //cout << (int)'a' << endl;
}