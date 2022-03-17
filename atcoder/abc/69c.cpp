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
#include<numeric>
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int o=0, e=0, ee=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0 && a[i]%4!=0){
            e=1;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]%2!=0) o++;
        if(a[i]%4==0) ee++;
    }   
    if(o+e<=ee+1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}