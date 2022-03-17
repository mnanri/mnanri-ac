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

int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(),a.end());

    vector<int> y;
    y.push_back(a.at(0));
    for(int i=1;i<n;i++){
        if(a.at(i)==a.at(i-1)){
            continue;
        }else{
            y.push_back(a.at(i));
        }
    }

    if(y.size()==1){
        cout << y.at(0) << endl;
        return 0;
    }
    int g=gcd(y[0],y[1]);
    for(int i=2;i<y.size();i++){
        int tmp=gcd(y[0],y[i]);
        g=min(g,tmp);
    }

    cout << g << endl;
}