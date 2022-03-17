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
    vector<double> co(3);
    for(int i=0;i<3;i++) cin >> co[i];
    sort(co.begin(),co.end());
    if(co[0]==0 && co[1]==0)) {
        cout << fixed << setprecision(8) << (100-co[2])*1.0 << endl;
        return 0;
    }

    double ans=0;
    if(co[0]==0){
        double cntx=100-co[1],cnty=100-co[2];
        double sumx=co[1]+co[2],sumy=co[1]+co[2];
        for(int i=0;i<cnty;i++){
            
        }    
    }
}