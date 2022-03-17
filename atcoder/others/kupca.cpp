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
    int n;
    cin >> n;
    vector<int> x,y;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }

    int sum=0;
    for(int i=1;i<n;i++){
        int tmp=abs(x.at(i-1)-x.at(i))+abs(y.at(i-1)-y.at(i));
        sum += tmp;
    }

    cout << sum << endl;
}