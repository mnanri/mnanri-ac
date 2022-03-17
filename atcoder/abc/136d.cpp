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
    string s;
    cin >> s;
    vector<int> t(s.size(),0);
    int dir=1; 
    int cnt=1;
    int kep=1;
    for(int i=1;i<s.size();i++){
        if(dir){
            if(s.at(i)=='R'){
                cnt++;
            }else{
                dir=0;
                t.at(i)+=cnt/2;
                t.at(i-1)+=(cnt-cnt/2);
                cnt=1;
                kep=i;
            }
        }else{
            if(s.at(i)=='L'){
                cnt++;
                if(i==s.size()-1){
                    if(cnt>=1){
                        t.at(kep-1)+=cnt/2;
                        t.at(kep)+=(cnt-cnt/2);
                    }
                }
            }else{
                dir=1;
                t.at(kep-1)+=cnt/2;
                t.at(kep)+=(cnt-cnt/2);
                cnt=1;
                
            }
        }
    }

    for(int i=0;i<t.size();i++) cout << t.at(i) << ' ';
    cout << endl;
}