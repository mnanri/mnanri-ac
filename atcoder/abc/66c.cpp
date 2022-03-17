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
    vector<int> b;
    vector<int> c;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(i%2==0){
            b.push_back(a);
        }else{
            c.push_back(a);
        }
    }
    if(n%2==0){
        reverse(c.begin(),c.end());
        for(int i=0;i<b.size();i++) c.push_back(b[i]);
        for(int j=0;j<n;j++) cout << c[j] << ' ';
        cout << endl;
    }else{
        reverse(b.begin(),b.end());
        for(int j=0;j<c.size();j++) b.push_back(c[j]);
        for(int i=0;i<n;i++) cout << b[i] << ' ';
        cout << endl;
    }
}