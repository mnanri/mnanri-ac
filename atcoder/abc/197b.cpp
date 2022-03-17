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
    int h,w,x,y;
    cin >> h >> w >> x >> y;
    vector<string> s(h);
    for(int i=0;i<h;i++) cin >> s[i];

    x--,y--;
    int cnt=1;
    for(int i=x+1;i<h;i++){
        if(s[i][y]=='.'){
            cnt++;
        }else{
            break;
        }
    }
    for(int i=x-1;i>=0;i--){
        if(s[i][y]=='.'){
            cnt++;
        }else{
            break;
        }
    }

    for(int i=y+1;i<w;i++){
        if(s[x][i]=='.'){
            cnt++;
        }else{
            break;
        }
    }
    for(int i=y-1;i>=0;i--){
        if(s[x][i]=='.'){
            cnt++;
        }else{
            break;
        }
    }
    cout << cnt << endl;
}