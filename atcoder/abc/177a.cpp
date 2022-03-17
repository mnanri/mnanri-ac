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
using intl = int64_t;
using graph = vector<vector<int> >;
int main(){
    int d,t,s;
    cin >> d >> t >> s;
    if(d<=t*s){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}