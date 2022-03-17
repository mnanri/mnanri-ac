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
    map<int,int> a;
    for(int i=0;i<n;i++){
        int b;
        cin >> b;
        if(a.count(b)){
            a.erase(b);
        }else{
            a[b]=1;
        }
    }
    cout << a.size() << endl;
}