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
    int a,b;
    cin >> a >> b;
    int c=a+b;
    if(c>=15 && b>=8){
        cout << 1 << endl;
    }else if(c>=10 && b>=3){
        cout << 2 << endl; 
    }else if(c>=3){
        cout << 3 << endl;
    }else{
        cout << 4 << endl;
    }
}