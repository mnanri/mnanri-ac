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
const ll A = (ll)pow(10,10);
int main(){
    ll n;
    string t;
    cin >> n >> t;
    if(n==1){
        if(t=="0"){
            cout << A << endl;
        }else{
            cout << 2*A << endl;
        }
        return 0;
    }
    if(n==2){
        if(t=="00"){
            cout << 0 << endl;
        }else if(t=="01"){
            cout << A-1 << endl;
        }else if(t=="10" || t=="11"){
            cout << A << endl;
        }
        return 0;
    }
    for(int i=0;i<n-2;i++){
        if(t.at(i)=='1' && t.at(i+1)=='1'){
            if(t.at(i+2)=='1'){
                cout << 0 << endl;
                return 0;
            }
        }else if(t.at(i)=='1' && t.at(i+1)=='0'){
            if(t.at(i+2)=='0'){
                cout << 0 << endl;
                return 0;
            }
        }else if(t.at(i)=='0' && t.at(i+1)=='0'){
            cout << 0 << endl;
            return 0;
        }
    }
    if(t.at(n-3)=='0' && t.at(n-2)=='1' && t.at(n-1)=='0'){
        cout << 0 << endl;
        return 0;
    }

    if(n%3==0){
        if(t.at(n-1)=='0'){
            cout << A-n/3+1 << endl;
        }else{
            cout << A-n/3 << endl;
        }
    }else if(n%3==1){
        cout << A-n/3 << endl;
    }else{
        if(t.at(0)=='0'){
            cout << A-n/3-1 << endl;
        }else if(t.at(n-1)=='0'){
            cout << A-n/3 << endl;
        }else{
            cout << A-n/3 << endl;
        }
    }
}