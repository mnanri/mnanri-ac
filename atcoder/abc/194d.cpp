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
    double p=1.0/n;
    double s=pow(1.0/n,n-1);
    double e=0;
    for(int i=n-1;i<1000;i++){
        e+=i*s;
        s*=p;
    }
    cout << fixed << setprecision(8) << e << endl;
}