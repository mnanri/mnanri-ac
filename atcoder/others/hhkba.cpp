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
    char s,t;
    cin >> s;
    if(s=='N'){
        cin >> t;
        cout << t << endl;
    }else{
        cin >> t;
        if(t=='a') cout << 'A' << endl;
        if(t=='b') cout << 'B' << endl;
        if(t=='c') cout << 'C' << endl;
    }
}