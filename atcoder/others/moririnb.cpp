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
    int x,y,z;
    cin >> x >> y >> z;
    if(x==2 && y+z>=29){
        cout << x+1 << ' ' << y+z-28 << endl;
    }else{
        cout << x << ' ' << y+z << endl;
    }
}