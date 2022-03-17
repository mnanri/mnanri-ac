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
    string n;
    cin >> n;

    int sum =0;
    for(int i=0;i<n.size();i++){
        sum += int(n.at(i))-48;
    }
    //cout << sum << endl; 

    if(sum%9==0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}