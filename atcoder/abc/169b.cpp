#include<iostream>
#include<algorithm>
#include<vector>
#include<tuple>
#include<map>
#include<queue>
#include<stack>
#include<deque>
#include<bitset>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<__int128_t> a;
    int i,j,A;
    for(i=0;i<n;i++){
        cin >> A; 
        a.push_back(A);
    }
    sort(a.begin(),a.end());
    __int128_t m=1;
    for(i=0;i<n;i++){
        m *= a.at(i);
        // cout << m << endl;
        if(m > pow(10,18)){
            cout << -1 << endl;
            break;
        }
    }
    if(m<=pow(10,18))
        cout << m << endl;
}