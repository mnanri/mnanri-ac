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
    int n;
    cin >> n;
    int64_t sum=0;
    for(int64_t i=1;i<=n;i++){
        if(i%3!=0 && i%5!=0) sum += i;
    }
    cout << sum << endl;
}