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
    int h,w;
    cin >> h >> w;
    vector<string> g(h);
    for(int i=0;i<h;i++) cin >> g[i];

    int cnt=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(g[i][j]=='#'){
                int check=1;
                if(g[i-1][j]=='#' && g[i+1][j]=='#') check=0;
                if(g[i-1][j+1]=='#' && g[i+1][j-1]=='#') check=0;
                if(g[i-1][j-1]=='#' && g[i+1][j+1]=='#') check=0;
                if(g[i][j-1]=='#' && g[i][j+1]=='#') check=0;
                if(check) cnt++;
            }
        }
    }

    cout << cnt << endl;
}