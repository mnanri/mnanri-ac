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
    int zero=0,one=0;
    for(int i=0;i<s.size();i++){
        if(s.at(i)=='1'){
            one++;
        }else{
            zero++;
        }
    }
    cout << s.size()-abs(one-zero) << endl;
}