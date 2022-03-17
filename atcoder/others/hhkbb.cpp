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
    int h,w;
    cin >> h >> w;
    vector<string> s;
    for(int i=0;i<h;i++){
        string t;
        cin >> t;
        s.push_back(t);
    }

    ll cnt=0;
    for(int i=0;i<h-1;i++){
        for(int j=0;j<w-1;j++){
            if(s.at(i).at(j)=='.'){
                if(s.at(i).at(j+1)=='.') cnt++;
                if(s.at(i+1).at(j)=='.') cnt++; 
            }
        }
    }
    for(int i=0;i<w-1;i++){
        if(s.at(h-1).at(i)=='.'){
            if(s.at(h-1).at(i+1)=='.') cnt++;
        }
    }
    for(int i=0;i<h-1;i++){
        if(s.at(i).at(w-1)=='.'){
            if(s.at(i+1).at(w-1)=='.') cnt++;
        }
    }
    

    cout << cnt << endl;
}