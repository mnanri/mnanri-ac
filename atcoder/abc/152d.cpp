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
    vector<vector<int> > c(10,vector<int>(10,0));
    for(int i=1;i<=n;i++){
        if(i%10==0) continue;
        int tmp=i;
        vector<int> kep;
        while(tmp>=10){
            kep.push_back(tmp%10);
            tmp/=10;
        }
        kep.push_back(tmp);
        c[kep[kep.size()-1]][kep[0]]++;
    }

    int cnt=0;
    for(int i=1;i<=9;i++){
        for(int j=i;j<=9;j++){
            if(i==j){
                cnt+=c[i][j]*c[i][j];
            }else{
                cnt+=2*c[i][j]*c[j][i];
            }
        }
    }

    cout << cnt << endl;
}