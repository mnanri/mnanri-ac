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
    string n;
    cin >> n;
    string l=n;
    reverse(n.begin(),n.end());
    if(n==l){
        cout << "Yes" << endl;
        return 0;
    }

    for(int i=0;i<9;i++){
        n.push_back('0');
        string m=n;
        reverse(m.begin(),m.end());
        if(n==m){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}