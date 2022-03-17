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
    string s;
    cin >> s;
    if(s.at(s.size()-1)=='s'){
        s.push_back('e');
        s.push_back('s');
    }else{
        s.push_back('s');
    }

    cout << s << endl;
}