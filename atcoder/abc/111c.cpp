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
    vector<int> v(100001,0);
    vector<int> w(100001,0);
    for(int i=0;i<n/2;i++){
        int x,y;
        cin >> x >> y;
        v[x]++;
        w[y]++;
    }
    int cntv=0,cntvv=0,cntw=0,cntww=0,kepv=0,kepw=0;
    for(int i=0;i<100001;i++){
        int tmpv=v[i],tmpw=w[i];
        if(tmpv>=cntv){
            kepv=i;
            cntvv=cntv;
            cntv=tmpv;
        }
        if(tmpw>=cntw){
            kepw=i;
            cntww=cntw;
            cntw=tmpw;
        }
    }
    if(kepv==kepw){
        if(cntvv==0 && cntww!=0){
            cout << n-cntv-cntww << endl;
        }else if(cntww==0 && cntvv!=0){
            cout << n-cntw-cntvv << endl;
        }else{
            int sub=max(cntvv+cntw,cntww+cntv);
            cout << n-sub << endl;
        }
    }else{
        cout << n-cntv-cntw << endl;
    }
}