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
    vector<int> a(n+1);
    a[0]=-1;
    for(int i=1;i<=n;i++) cin >> a[i];

    vector<int> b(n+1,0);
    for(int i=n;i>n/2;i--){
        b[i]=a[i];
    }
    for(int i=n/2;i>=1;i--){
        int tmp=0;
        for(int j=2*i;j<=n;j+=i){
            tmp+=b[j];
        }
        if(tmp%2==a[i]){
            b[i]=0;
        }else{
            b[i]=1;
        }
    }
    vector<int> c;
    for(int i=1;i<=n;i++){
        if(b[i]==1){
            c.push_back(i);
        }
    }

    cout << c.size() << endl;
    for(int i=0;i<c.size();i++) cout << c[i] << ' ';
    cout << endl;
}