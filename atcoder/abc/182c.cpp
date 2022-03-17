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
    ll n;
    cin >> n;
    ll r=n%3;
    if(r==0){
        cout << 0 << endl;
        return 0;
    }

    ll kep=n;
    ll keta[18];
    for(int i=0;i<18;i++){
        int tmp=kep%10;
        kep/=10;
        keta[i]=tmp;    
    }

    int ichi=0,ni=0;
    for(int i=0;i<18;i++){
        if(keta[i]%3==1) ichi++;
        if(keta[i]%3==2) ni++;
    }

    if(r==1 && ichi!=0 && n>=10){
        cout << 1 << endl;
    }else if(r==1 && ichi==0 && ni>=2 && n>=100){
        cout << 2 << endl;
    }else if(r==2 && ni!=0 && n>=10){
        cout << 1 << endl;
    }else if(r==2 && ni==0 && ichi>=2 && n>=100){
        cout << 2 << endl;
    }else{
        cout << -1 << endl;
    }
}