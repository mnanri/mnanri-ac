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
    int cnt=0;
    for(int i=0;i<n;i++){
        int d,e;
        cin >> d >> e;
        if(d==e){
            cnt++;
        }else{
            cnt=0;
        }

        if(cnt==3){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}