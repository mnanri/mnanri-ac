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
    const int m=100000;
    vector<int> cnt(m+1,0);
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x>m){
            sum++;
            continue;
        }else{
            cnt.at(x)++;
        }
    }

    for(int i=0;i<m+1;i++){
        if(i>cnt.at(i)){
            sum+=cnt.at(i);
        }else{
            sum+=cnt.at(i)-i;
        }
    }

    cout << sum << endl;
}