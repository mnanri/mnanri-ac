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
    int n,m;
    cin >> n >> m;
    int sum=0;
    for(int i=0;i<m;i++){
        int a;
        cin >> a;
        sum += a;
    }

    if(n>=sum){
        cout << n-sum << endl;
    }else{
        cout << -1 << endl;
    }
}