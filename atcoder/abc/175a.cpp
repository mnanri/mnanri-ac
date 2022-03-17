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
    string s;
    cin >> s;
    char a = s.at(0);
    char b = s.at(1);
    char c = s.at(2);
    if(a=='S' && b=='S' && c=='S') cout << 0 << endl;
    if(a=='S' && b=='S' && c=='R') cout << 1 << endl;
    if(a=='S' && b=='R' && c=='S') cout << 1 << endl;
    if(a=='R' && b=='S' && c=='S') cout << 1 << endl;
    if(a=='R' && b=='S' && c=='R') cout << 1 << endl;
    if(a=='S' && b=='R' && c=='R') cout << 2 << endl;
    if(a=='R' && b=='R' && c=='S') cout << 2 << endl;
    if(a=='R' && b=='R' && c=='R') cout << 3 << endl;
}