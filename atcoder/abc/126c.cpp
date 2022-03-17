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
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
    double n,k;
    cin >> n >> k;
    double ans=0;
    for(int i=1;i<=(int)n;i++){
        double tmp=log2(k/i);
        double j=0;
        while(j<tmp){
            j++;
        }
        ans+=pow(2,-j);
    }
    cout << fixed << setprecision(11) << ans/n << endl;
}