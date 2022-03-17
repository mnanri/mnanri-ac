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
    vector<vector<ll> > c(n,vector<ll>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin >> c[i][j];
    }

    ll m=M;
    int col=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(m>c[i][j]){
                m=c[i][j];
                col=j;
            }
        }
    }

    vector<ll> a(n,0);
    vector<ll> b(n,0);

    for(int i=0;i<n;i++){
        a[i]=c[i][col]-m;
    }
    for(int i=0;i<n;i++){
        b[i]=c[0][i]-a[0];
        if(b[i]<0){
            cout << "No" << endl;
            return 0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]+b[j]!=c[i][j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    for(int i=0;i<n;i++) cout << a[i] << ' ';
    cout << endl;
    for(int i=0;i<n;i++) cout << b[i] << ' ';
    cout << endl;
}