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
    ll n;
    cin >> n;
    const ll x=26;
    ll y=26;
    int cnt=1;
    while(y<=n){
        cnt++;
        y+=(ll)pow(x,cnt);
    }
    //cout << cnt << endl;

    int num[cnt];
    num[0]=n%x;
    
    for(int i=1;i<cnt;i++){
        n=(n-num[i-1])/x;
        num[i]=n%x;
    }

    for(int i=0;i<cnt;i++) cout << num[i] << ' ';
    cout << endl;

    string name;
    for(int i=cnt-1;i>=0;i--){
        char tmp;
        if(num[i]!=0){
            tmp=(char)('a'+num[i]-1);
        }else{
            tmp='z';
        }
        name.push_back(tmp);
    }

    cout << name << endl; 
}