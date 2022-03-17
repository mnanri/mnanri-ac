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
    string s;
    cin >> k >> s;
    if(k>=s.size()) {
        cout << s << endl;
    }else{
        for(int i=0;i<k;i++) cout << s.at(i);
        cout << "..." << endl;
    }
}