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
    double a,b,x;
    cin >> a >> b >> x;

    if(x<=a*b){
        cout << fixed << setprecision(8) << 90.00000000 << endl;
        return 0;
    }

    if(x<=a*a*b*0.5){
        double  h = 2*x/(a*b);
         
    }
}