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
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        ll n;
        cin >> n;

        if(n%2==1){
            cout << "Odd" << endl;
        }else if(n%2==0 && n%4!=0){
            cout << "Same" << endl;
        }else{
            cout << "Even" << endl;
        }
    }
}