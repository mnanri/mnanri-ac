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
    int n;
    cin >> n;
    string s;
    int ac=0,wa=0,tle=0,re=0;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s=="AC")
            ac++;
        if(s=="WA")
            wa++;
        if(s=="TLE")
            tle++;
        if(s=="RE")
            re++;
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
}