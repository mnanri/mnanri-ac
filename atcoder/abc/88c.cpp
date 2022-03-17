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
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> c[i][j];
        }
    }

    int kep=1;
    if(c[0][0]-c[0][1]!=c[1][0]-c[1][1]) kep=0;
    if(c[0][1]-c[0][2]!=c[1][1]-c[1][2]) kep=0;
    if(c[1][0]-c[1][1]!=c[2][0]-c[2][1]) kep=0;
    if(c[1][1]-c[1][2]!=c[2][1]-c[2][2]) kep=0;
    if(kep){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}