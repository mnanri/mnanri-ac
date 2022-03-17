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
    vector<int> six,nine;
    int roku=6;
    int kyu=9;
    while(roku<=n){
        six.push_back(roku);
        roku*=6;
    }
    while(kyu<=n){
        nine.push_back(kyu);
        kyu*=9;
    }
    
}