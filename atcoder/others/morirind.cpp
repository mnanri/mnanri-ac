#include<iostream>
#include<iomanip>
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
    int n;
    cin >> n;
    
    int query=-1;
    while(1){
        cin >> query;
        if(query==0){
            int num;
            cin >> num;
            n += num;
        }
        if(query==1){
            int num;
            cin >> num;
            n -= num;
        }
        if(query==2){
            bitset<11> tmp(n);
            if(n==0){
                cout << "No participants." << endl;
                continue;
            }
            if(tmp.test(0)) cout << "Gureigu" << endl;
            if(tmp.test(1)) cout << "watamario" << endl;
            if(tmp.test(2)) cout << "ganba001227" << endl;
            if(tmp.test(3)) cout << "kugeki129" << endl;
            if(tmp.test(10)) cout << "moririn2528" <<endl;
        }
        if(query==3) break;
    }

}