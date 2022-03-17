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
    int n;
    cin >> n;

    vector<vector<string> > s(5);
    for(int i=0;i<n;i++){
        string t;
        cin >> t;
        char U=t.at(0);
        if(U=='M') s.at(0).push_back(t);
        if(U=='A') s.at(1).push_back(t);
        if(U=='R') s.at(2).push_back(t);
        if(U=='C') s.at(3).push_back(t);
        if(U=='H') s.at(4).push_back(t);
    } 

    ll M=s.at(0).size(),A=s.at(1).size(),R=s.at(2).size(),C=s.at(3).size(),H=s.at(4).size();

    //cout << M << ' ' << A << ' ' << R << ' ' << C << ' ' << H << endl;

    ll tmp=M*A*R+M*A*C+M*A*H+M*R*C+M*R*H+M*C*H+A*R*C+A*R*H+A*C*H+R*C*H;

    cout << tmp << endl;
}