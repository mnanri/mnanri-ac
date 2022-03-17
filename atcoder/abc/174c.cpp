#include<iostream>
#include<algorithm>
#include<vector>
#include<tuple>
#include<map>
#include<queue>
#include<stack>
#include<deque>
#include<bitset>
#include<math.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    int l;
    if(k%7==0){
        l = 9*k/7;
    }else{
        l = 9*k;
    }
    int i;
    int r=10%l;
    if(r==1){
        cout << 1 << endl;
    }else{
        for(i=2;i<=l;i++){
            r = (r*10)%l;
            if(r==1){
                cout << i << endl;
                break;
            }
        }
    }
    if(i==l+1 && r!=1)
        cout << -1 << endl;
}