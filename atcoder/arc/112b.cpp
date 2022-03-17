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
    ll b,c;
    cin >> b >> c;
    ll cnt=0;
    if(b==0){
        cout << c << endl;
        return 0;
    }
    if(b>0){
        if(c>=b*2){
            cnt+=b*2;
        }else{
            if(c<2){
                cnt++;
            }else{
                cnt+=c;
            }
        }
        c--;
        if(c<2){
            cnt++;
        }else{
            cnt+=c;
        }
    }else{
        if(c<2){
            cnt++;
        }else{
            cnt+=c;
        }
        c--;
        if(c>=-b*2){
            cnt-=b*2;
        }else{
            if(c<2){
                cnt++;
            }else{
                cnt+=c;
            }
        }
    }
    cout << cnt << endl;
}