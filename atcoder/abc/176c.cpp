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
    int64_t a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int64_t sum=0;
    int64_t small=a[0];
    for(int i=1;i<n;i++){
        if(small>a[i]){
            sum += small -a[i]; 
        }else{
            small=a[i];
        }
    }

    cout << sum << endl;
}