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
    int a,b,c,d;
    int mv[24][2]={{-3,0},{-2,1},{-2,0},{-2,-1},{-1,2},{-1,1},{-1,0},{-1,-1},{-1,-2},{0,3},{0,2},{0,1},{0,-1},{0,-2},{1,2},{1,1},{1,0},{1,-1},{1,-2},{2,1},{2,0},{2,-1},{3,0}};
    cin >> a >> b >> c >> d;
    if(a==c && b==d){
        cout << 0 << endl;
        return 0;
    }
    if(abs(a-c)+abs(b-d)<=3 || a+b==c+d || a-b==c-d){
        cout << 1 << endl;
        return 0;
    }
    int x=c-a,y=d-b;
    if((x+y)%2==0 && (x-y)%2==0){
        cout << 2 << endl;
        return 0;
    }else{
        for(int i=0;i<24;i++){
            
            int s=a+mv[i][0],t=b+mv[i][1];
            if(abs(s-c)+abs(t-d)<=3 || s+t==c+d || s-t==c-d){
                cout << 2 << endl;
                return 0;
            }
        }

        cout << 3 << endl;
    }
}