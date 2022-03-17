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
    vector<string> s;
    for(int i=0;i<n;i++){
        string t;
        cin >> t;
        sort(t.begin(),t.end());
        s.push_back(t);
    }

    sort(s.begin(),s.end());

    ll ans=0;
    ll cnt=1;
    for(int i=1;i<n;i++){
        if(s.at(i)==s.at(i-1)){
            cnt++;
        }else{
            ans+=cnt*(cnt-1)/2;
            cnt=1;
        }
    }
    ans+=cnt*(cnt-1)/2;
    cout << ans << endl;
}