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
    int n,k;
    string s;
    cin >> n >> k >> s;
    n*=2;

    for(int i=0;i<k;i++){
        s+=s;
        string t;
        for(int j=0;j<n-1;j+=2){
            if(s[j]=='R'){
                if(s[j+1]=='P'){
                    t.push_back('P');
                }else{
                    t.push_back('R');
                }
            }else if(s[j]=='S'){
                if(s[j+1]=='R'){
                    t.push_back('R');
                }else{
                    t.push_back('S');
                }
            }else{
                if(s[j+1]=='S'){
                    t.push_back('S');
                }else{
                    t.push_back('P');
                }
            }
        }
        s=t;
    }
    cout << s[0] << endl;
}
