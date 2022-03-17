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
    int cnt=0;
    for(int i=1;i<=n;i++){
        vector<int> ten,eight;
        int t=i,e=i;
        while(t>=10){
            int tmp=t%10;
            ten.push_back(tmp);
            t/=10;
        }
        ten.push_back(t);
        while(e>=8){
            int tmp=e%8;
            eight.push_back(tmp);
            e/=8;
        }
        eight.push_back(e);
        int c=1;
        for(int j=0;j<ten.size();j++){
            if(ten[j]==7) {
                c=0;
                break;
            }
        }
        for(int j=0;j<eight.size();j++){
            if(eight[j]==7) {
                c=0;
                break;
            }
        }
        if(c) cnt++;
    }

    cout << cnt << endl;
}