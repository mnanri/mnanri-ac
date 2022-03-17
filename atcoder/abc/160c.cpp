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
    int k,n;
    cin >> k >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int dis=0;
    
    for(int i=1;i<n;i++){
        dis = max(dis,a[i]-a[i-1]);
    }
    dis=max(dis,k-a[n-1]+a[0]);

    cout << k-dis << endl;
}