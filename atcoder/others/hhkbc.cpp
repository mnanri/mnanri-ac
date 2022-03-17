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
    vector<int> p;
    for(int i=0;i<n;i++){
        int q;
        cin >> q;
        p.push_back(q);
    }
    
    vector<int> c(200001,1);

    int cnt=0;
    for(int i=0;i<n;i++){
        c.at(p.at(i))=0;
        while(c.at(cnt)==0){
            cnt++;
        }
        cout << cnt << endl;
    }
}