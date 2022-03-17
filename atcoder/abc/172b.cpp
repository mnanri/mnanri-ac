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
    string s,t;
    cin >> s >> t;
    int counter=0;
    for(int i=0;i<s.size();i++){
        if(s.at(i)!=t.at(i))
            counter++;
    }
    cout << counter << endl;
}