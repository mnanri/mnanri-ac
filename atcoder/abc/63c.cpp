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
    vector<int> p(n);
    int sum=0;
    for(int i=0;i<n;i++) {
        cin >> p[i];
        sum+=p[i];
    }

    sort(p.begin(),p.end());

    if(sum%10==0){
        int check=0;
        for(int i=0;i<n;i++){
            if(p[i]%10!=0){
                sum-=p[i];
                check=1;
                break;
            }
        }
        if(check){
            cout << sum << endl;
        }else{
            cout << 0 << endl;
        }
    }else{
        cout << sum << endl;
    }
}   