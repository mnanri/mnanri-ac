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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int e=a+b,f=a+c,g=a+d,h=b+c,i=b+d,j=c+d,k=a+b+c,l=a+b+d,m=a+c+d,n=b+c+d;
    if(e==j || f==i || g==h || a==n || b==m || c==l || d==k){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}