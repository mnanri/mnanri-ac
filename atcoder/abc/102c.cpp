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
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) a[i]-=(i+1);
    sort(a.begin(),a.end());

    ll sum=0,sum2=0;
    ll sub,sub2;
    if(n%2==0){
        sub=(a[n/2-1]+a[n/2])/2;
        sub2=sub+1;
        for(int i=0;i<n;i++) sum+=abs(a[i]-sub);
        for(int i=0;i<n;i++) sum2+=abs(a[i]-sub2);
        cout << min(sum,sum2) << endl;
    }else{
        sub=a[n/2];
        for(int i=0;i<n;i++) sum+=abs(a[i]-sub);
        cout << sum << endl;
    }
}