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
    int n,k;
    cin >> n >> k;
    vector<int> cnt(n+1,0);
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        cnt.at(a)++;
    }

    sort(cnt.begin(),cnt.end());
    reverse(cnt.begin(),cnt.end());
    int sum=n;

    for(int i=0;i<k;i++){
        sum-=cnt.at(i);
    }

    cout << sum << endl;
}