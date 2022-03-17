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
    int n,m;
    cin >> n >> m;
    vector<int> a(n+1,1);
    for(int i=0;i<m;i++){
        int s;
        cin >> s;
        a.at(s)=0; 
    }
    if(n==1 && a.at(1)==0){
        cout << 0 << endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(a.at(i)==0){
            if(a.at(i+1)==0){
                cout << 0 << endl;
                return 0;
            }
        }
    }

    vector<ll> cnt(n+1,0);
    a.at(0)=1;
    if(a.at(1)) a.at(1)=1;
    for(int i=2;i<n+1;i++){
        if(a.at(i)){
            if(a.at(i-1)){
                a.at(i)=(a.at(i-1)+a.at(i-2))%M;
            }else{
                a.at(i)=a.at(i-2)%M;
            }
        }
    }
    cout << a.at(n) << endl;
}