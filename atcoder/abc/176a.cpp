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
    int n,x,t;
    cin >> n >> x >> t;
    int counter=1;
    while(counter*x<n){
        counter++;
    }
    cout << counter*t << endl;
}