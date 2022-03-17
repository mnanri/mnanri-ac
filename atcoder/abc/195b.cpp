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
    int a,b,w;
    cin >> a >> b >> w;
    w*=1000;
    int x,y;
    x=w/a,y=w/b;
    if(x==0){
        cout << "UNSATISFIABLE" << endl;
        return 0;
    }
    int p,q;
    p=w-a*x,q=w-b*y;
    int mi,ma;
    if(p%x==0){
        if(a+p/x>b){
            cout << "UNSATISFIABLE" << endl;
            return 0;
        }else{
            ma=x;
        }
    }else{
        if(a+p/x+1>b){
            cout << "UNSATISFIABLE" << endl;
            return 0;
        }else{
            ma=x;
        }
    }

    if(0<q && q<a){
        if(q+(b-a)*y<a){
            cout << "UNSATISFIABLE" << endl;
            return 0;
        }else{
            mi=y+1;
        }
    }else if(q==0){
        mi=y;
    }else{
        mi=y+1;
    }

    cout << mi << ' ' << ma << endl;
}