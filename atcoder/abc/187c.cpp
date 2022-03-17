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
    vector<string> s(n);
    for(int i=0;i<n;i++) cin >> s[i];

    map<string,int> list;
    vector<string> cand;
    for(int i=0;i<n;i++){
        if(s[i].at(0)=='!'){
            if(list.count(s[i])){
                list.at(s[i])++;
            }else{
                list[s[i]]=1;
            }
        }else{
            cand.push_back(s[i]);
        }
    }

    for(int i=0;i<cand.size();i++){
        string tmp="!"+cand[i];
        if(list.count(tmp)){
            cout << cand[i] << endl;
            return 0;
        }
    }

    cout << "satisfiable" << endl;
}