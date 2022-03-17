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
    for(int i=1;i<=n;i++){
        ll a=2;
        int cnt=0;
        ll tmp=i;
        while(tmp>=a*a){
            if(tmp%a==0){
                tmp/=a;
                cnt++;
            }else{
                a++;
            }
        }
        if(tmp!=1) cnt++;
        cnt++;
        cout << cnt << ' ';
    }
    cout << endl;
}