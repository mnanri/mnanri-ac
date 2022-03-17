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
int main(){
    int n,x,y;
    cin >> n >> x >> y;
    int a[n-1];
    for(int i=0;i<n-1;i++) a[i]=n-1-i;

    for(int i=0;i<((n-1)/2);i++){
        a[i]++;
        a[n-2-i]--;
    }
    
    for(int i=0;i<n-1;i++) cout << a[i] << endl;
}