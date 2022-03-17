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
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin >> a[i];

    queue<int> b;
    for(int i=0;i<m;i++) b.push(a[i]);
    vector<int> c(n,1);
    for(int i=0;i<m;i++) c[a[i]]=0;
    //for(int i=0;i<n;i++) cout << c[i] << ' ';
    //cout << endl;
    int tmp=-1;
    int ans=n;
    for(int i=0;i<n;i++){
        if(c[i]){
            tmp=i;
            ans=min(ans,tmp);
            break;
        } 
    }
    for(int i=m;i<n;i++){
        int var=b.front();
        b.pop();
        b.push(a[i]);
        c[var]=1;
        c[a[i]]=0;
        for(int j=0;j<n;j++){
            if(c[j]){
                tmp=j;
                ans=min(ans,tmp);
                break;
            }
        }
    }
    cout << ans << endl;
}